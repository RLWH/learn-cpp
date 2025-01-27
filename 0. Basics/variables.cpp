/**
 * @file variables.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief 
 * A general introduction of using all data types. 
 * - Global variables
 * - int, float, bool, signed and unsigned data types
 * - constant literals (int, float, octal, hexadecimal)
 * 
 * @version 0.1
 * @date 2025-01-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>

// a and b are global variables
// Global variables are accessible to all parts of codes
// The memory of global variables is managed statiscally by compiler
// They are allocated to the data segment of the memory
// Once the program ends, the memory is freed. 
int a, b = 5;

int main() {
    std::cout << "Hello world!" << std::endl;

    // c and d are local variables. 
    // They are defined with the main function scope. 
    // Once the function is completed, the memory is freed
    // The local variables are usually stored in the stack of the memory
    bool my_flag;

    // Assign values to variables
    a = 7;
    b = 5;
    my_flag = false;

    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    std::cout << "my_flag=" << my_flag << std::endl;

    my_flag = true;
    std::cout << "a + b=" << a + b << std::endl;
    std::cout << "b - a=" << b - a << std::endl;
    std::cout << "my_flag=" << my_flag << std::endl;

    // Now, test a unsigned positive int variable
    unsigned int positive;
    positive = b - a;    // 5 - 7 = -2, but we assign to unsigned variable
    std::cout << "b - a(unsigned) = " << positive << std::endl; // We will get 4294967294. Why?

    // 4,294,967,294 is equal to 2^32 - 2
    // This is the two's complement representation of -2 in binary
    // The binary number is the same, but the representation is different
    // This is why we must be very careful when deciding whether to use unsigned variable
    // or signed integers. 


    std::cout << "End" << std::endl;
}