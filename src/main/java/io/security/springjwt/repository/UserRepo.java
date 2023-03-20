package io.security.springjwt.repository;

import io.security.springjwt.model.User;
import org.springframework.data.jpa.repository.JpaRepository;

// TODO add pagination using JpaRepository
public interface UserRepo extends JpaRepository<User, Long> {

    User findByUsername(String username);
}
