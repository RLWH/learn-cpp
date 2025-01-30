/**
 * @file structure.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief Struct
 * 
 * Structure is a container of hetergenous data members
 * - We can group integers, strings, and other objects together in a struct
 * - It is useful for implementing simple models that only need to have data members
 * - It is also available in C, but they don't follow the same syntax rules
 * 
 * @version 0.1
 * @date 2025-01-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <string>

enum class Cow_purpose {dairy, meat, hide, pet};

struct Cow {
    std::string name;
    int age;
    Cow_purpose purpose;
};

int main() {

    // Using the structure
    Cow my_cow;

    // Access the data members
    my_cow.age = 5;
    my_cow.name = "Hello";
    my_cow.purpose = Cow_purpose::dairy;

    std::cout << my_cow.name << " is a type-" << (int)my_cow.purpose << " cow. " << std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old. " << std::endl;


}