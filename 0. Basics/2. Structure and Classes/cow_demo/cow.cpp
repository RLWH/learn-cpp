/**
 * @file cow.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2025-02-01
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include <string>
#include "cow.h"

// Constructor - A constructor is called when the object is created.
// There is always an implicit constructor which simply create the objects
// and allocating memory for data members,
//
// However, we can always write additional version of Constructors by taking
// a custom set of parameters.
// This is known as overloading a function.
Cow::Cow(std::string name_i, int age_i, Cow_purpose purpose_i) {
    name = name_i;
    age = age_i;
    purpose = purpose_i;
};

// A getter is not supposed to modify anything in the class.
// Therefore, it is a good practice to define `const` after the parameter
// list to prevent the progammer from modifying any object inside the
// function
//
// This technique is known as "const correctness"
std::string Cow::get_name() const { return name; };
int Cow::get_age() const { return age; };
Cow_purpose Cow::get_purpose() const { return purpose; };

// Setters
void Cow::set_name(std::string new_name) { name = new_name; };
void Cow::set_age(int new_age) { age = new_age; };
void Cow::set_purpose(Cow_purpose new_purpose) { purpose = new_purpose; };