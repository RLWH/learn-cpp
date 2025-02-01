/**
 * @file pointers.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief Pointers
 * @details
 * 
 * In this script, we will demonstrate how to declare pointers, 
 * and explore what is the relationship between pointers, variables, 
 * and addresses
 * 
 * @version 0.1
 * @date 2025-02-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>

int main() {

    // Declare a variable a, fill the variable with value 37
    // What behind the scend is the program reserves a space of 4 bytes (int)
    // in the memory space. This memory space has an address (0x16fdfecbc). 
    int a = 37;

    // We can declare a pointer and point to the memory address
    int *ptr = &a;

    // Preview the outputs
    std::cout << "                               a = " << a << std::endl;    // a = 37
    std::cout << "                             ptr = " << ptr << std::endl;  // 0x16fdfecbc
    std::cout << "                The address of a = " << &a << std::endl;   // 0x16fdfecbc
    std::cout << "The content that ptr is pointing = " << *ptr << std::endl; // *ptr = 37
    std::cout << "              The address of ptr = " << &ptr << std::endl; // 0x16fdfecb0

}