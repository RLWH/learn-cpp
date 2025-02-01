/**
 * @file references.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief References
 * @details
 * Reference is an alias to an existing variable. 
 * This code will demonstrate how to create references to existing variables. 
 * @version 0.1
 * @date 2025-02-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>

int main() {
    
    // Declare a variable
    int a = 7;
    int &b = a;

    std::cout << "           a=" << a << std::endl;
    std::cout << "Address of a=" << &a << std::endl;
    std::cout << "           b=" << b << std::endl;   // Value same as a
    std::cout << "Address of b=" << &b << std::endl;  // Address same as a

}