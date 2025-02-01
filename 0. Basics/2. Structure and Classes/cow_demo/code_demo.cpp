/**
 * @file code_demo.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief To demo the usage of the Cow class
 * @version 0.1
 * @date 2025-02-01
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include "cow.h"

int main() {
    // Using the structure
    Cow my_cow("Hello", 5, Cow_purpose::dairy);

    // Access the data members
    // my_cow.age = 5;
    // my_cow.name = "Hello";
    // my_cow.purpose = Cow_purpose::dairy;

    my_cow.set_name("hahaha");

    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose()
              << " cow. " << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age()
              << " years old. " << std::endl;

    /**
     * @section Pointer Demonstration
     * @brief This section we will showcase how to use pointer to dynamically manage
     * the memory when creating and destroying the `Cow` object. 
     * 
     */
    Cow *my_cow_2;                                          // Declare as a pointer
    my_cow_2 = new Cow("Second cow", 7, Cow_purpose::hide); // `new` operator returns a pointer

    // The first way to access the member is to de-reference the pointer and use the dot operator
    // to access it
    std::cout << (*my_cow_2).get_name() << " is a type-" << (int)(*my_cow_2).get_purpose()
              << " cow. " << std::endl;

    // The second way is to use the `->` operator
    std::cout << my_cow_2->get_name() << " is " << my_cow_2->get_age()
              << " years old. " << std::endl;

}