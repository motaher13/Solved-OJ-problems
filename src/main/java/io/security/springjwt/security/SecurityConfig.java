package io.security.springjwt.security;

import io.security.springjwt.filter.CustomAuthenticationFilter;
import io.security.springjwt.filter.CustomAuthorizationFilter;
import lombok.RequiredArgsConstructor;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.http.HttpMethod;
import org.springframework.security.authentication.AuthenticationManager;
import org.springframework.security.config.annotation.authentication.builders.AuthenticationManagerBuilder;
import org.springframework.security.config.annotation.web.builders.HttpSecurity;
import org.springframework.security.config.annotation.web.configuration.EnableWebSecurity;
import org.springframework.security.config.annotation.web.configuration.WebSecurityConfigurerAdapter;
import org.springframework.security.config.http.SessionCreationPolicy;
import org.springframework.security.core.userdetails.UserDetailsService;
import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;
import org.springframework.security.web.authentication.UsernamePasswordAuthenticationFilter;

import static jdk.nashorn.internal.runtime.PropertyDescriptor.GET;
import static org.springframework.http.HttpMethod.POST;

@Configuration
@EnableWebSecurity
@RequiredArgsConstructor
public class SecurityConfig extends WebSecurityConfigurerAdapter  {
    /*
    * with this class, we will configure all security
    * meaning, which classes will be treated as user, how
    * encryption will work, all will be passed through here
    *
    * we have to pass UserDetailsService and BCryptPasswordEncoder type
    * beans in the config, we will generate BCryptPasswordEncoder in main application class
    * and our own UserServiceImpl implements UserDetailsService
    * */

    private final UserDetailsService userDetailsService;
    private final BCryptPasswordEncoder bCryptPasswordEncoder;


    @Override
    protected void configure(AuthenticationManagerBuilder auth) throws Exception {
        auth.userDetailsService(userDetailsService).passwordEncoder(bCryptPasswordEncoder);
    }

    @Override
    protected void configure(HttpSecurity http) throws Exception {
        // to configure auth process and response after auth in the custom auth filter
        // add auth0 maven dependency to process jwt generation process
        CustomAuthenticationFilter customAuthenticationFilter = new CustomAuthenticationFilter(authenticationManagerBean());
        // override "/login" path
        customAuthenticationFilter.setFilterProcessesUrl("/api/login");
        // disable cross site request forgery
        http.csrf().disable();
        // Spring Security will never create an HttpSession and it will never use it to obtain the SecurityContext
        // cause we will use jwt. so, no user session is necessary;
        http.sessionManagement().sessionCreationPolicy(SessionCreationPolicy.STATELESS);

        // UsernamePasswordAuthenticationFilter has antMatchers for /login path, so not necessary
        http.authorizeRequests()
                .antMatchers("/api/login/**").permitAll()
                .and().authorizeRequests().antMatchers("/api/token/refresh/**").permitAll()
                .and().authorizeRequests().antMatchers(GET, "/api/user/**").hasAnyAuthority("ROLE_USER")
                .and().authorizeRequests().antMatchers(POST,"/api/user/save/**").hasAnyAuthority("ROLE_ADMIN");

        http.addFilter(customAuthenticationFilter);
        // add this filter before every other filter, and there is only one filter before it,
        // so we mentioned before which wewant it
        http.addFilterBefore(new CustomAuthorizationFilter(), UsernamePasswordAuthenticationFilter.class);
    }


    @Bean
    @Override
    public AuthenticationManager authenticationManagerBean() throws Exception {
        return super.authenticationManagerBean();
    }
}
