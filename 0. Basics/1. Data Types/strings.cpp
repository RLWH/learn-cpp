/**
 * @file strings.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief Strings
 * @details
 * In C and C++, Strings are an array of characters (a.k.a Char array) that ends with `\0`
 * - In C++, although it is not a native type, we can use the `string` STL library for 
 *   many operations
 * - 
 * 
 * @version 0.1
 * @date 2025-01-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <string>
#include <cstring>  // Functions to handle Char Arrays - Part of C library

int main() {

    // Example using Char array -------------------------------------------
    // Char array example
    const size_t LENGTH = 25;

    // This constant string means there is an ASCII character \0 at the end
    // that terminates the string
    char array_1[LENGTH] = "Hey guys! ";

    // Another example - no specification of length
    char array_2[] = "What's up? ";

    // Example using String library ----------------------------------------
    std::string std_str1 = "Hey guys! ";
    std::string std_str2 = "What's up?";


    // Now, we want to concatenate 2 string together -----------------------

    // strncat() takes 3 arguments
    // - dest: the string where we want to append.
    // - src: the string from which ‘n’ characters are going to append.
    // - n: represents a maximum number of characters to be appended. size_t is an unsigned integral type.
    // This function modifies the 1st string
    strncat(array_1, array_2, LENGTH);

    std::cout << array_1 << std::endl;

    // For string object, we can make use of the operator `+` overloading
    // Overloading means we can redefine the operator on the operation to perform
    std::cout << std_str1 + std_str2 << std::endl;


}