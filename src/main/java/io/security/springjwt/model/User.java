package io.security.springjwt.model;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.Generated;
import lombok.NoArgsConstructor;
import org.springframework.data.repository.cdi.Eager;

import javax.persistence.*;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

@Entity
@Data // from Lombok, to create getter-setter
@NoArgsConstructor // from Lombok
@AllArgsConstructor // from Lombok
public class User {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO) // auto means based on data type, if its uuid type than the generated data will be uuid type, here it will be long type
    private Long id;
    private String name;
    private String username;
    private String password;

    @ManyToMany(fetch = FetchType.EAGER)
    private Collection<Role> roles=new ArrayList<>();
}
