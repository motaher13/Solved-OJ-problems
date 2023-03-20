package io.security.springjwt.model;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;

@Entity
@Data
@NoArgsConstructor
@AllArgsConstructor // from Lombok
public class Role {

    @Id
    @GeneratedValue(strategy = GenerationType.AUTO) // auto means based on data type, if its uuid type than the generated data will be uuid type, here it will be long type
    private Long id;
    private String name;
}
