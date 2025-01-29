/**
 * @file type_casting.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief Type Casting
 * @details
 * 
 * Type Casting in an important concept in c++. It gives us full control on the data that
 * we are working with. 
 * - Type casting is specifying how to interpret a piece of data
 * - It is useful for type conversion
 *      - e.g. Converting int_32 to float
 *      - Remember int and float have very different encoding
 * - Syntax: (uint32_t) - expression
 * 
 * 
 * @version 0.1
 * @date 2025-01-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <cstdint>          // For fixed integer types

int main() {

    float flt;              // Float
    int32_t signedInt;      // Signed Integer
    uint32_t unsignedInt;   // Unsighed Integer

    // Example - Implicit Conversion ----------------------------------------------------------
    // Implicit conversion means don't explicitly cast the values
    
    flt = 7.66;             // No trailing `f`, means a Double constant
                            // We can assign a double constant to a float variable

    flt = 7.66f;            // With trailing `f`, it is a float constant

    flt = -7.66;
    signedInt = flt;        // Assigning a float to signed int
                            // When assigning float to integer, value got truncated
                            // Becomes -7 here

    unsignedInt = signedInt;    // Assigning a negative number to unsigned variable
                                // This time, the number will be copied as-is in binary form
                                // 32-bit version of 2's complement of 7
                                // which is 4294967289 = 2^32 - 7


    // Preview the results
    std::cout << "flt: " << flt << std::endl;
    std::cout << "signedInt: " << signedInt << std::endl;
    std::cout << "unsignedInt: " << unsignedInt << std::endl; // 4294967289
    std::cout << "unsignedInt(cast to int32_t): " << (int32_t)unsignedInt << std::endl; // -7


    // Example - Converting fahrenheit to celsius -----------------------------------------------
    int farenheit = 100;        // Integer
    int celsius;                // Integer

    celsius = (5/9) * (farenheit - 32);

    std::cout << "celsius: " << celsius << std::endl; // 0 - Something must be wrong!
                                                      // Because (5 / 9) = 0
                                                      // They are both int

    float farenheit_f = 100.00f; // Float
    float celsius_f;

    celsius_f = (5.00f / 9.00f) * (farenheit_f - 32);

    std::cout << "celsius_f: " << celsius_f << std::endl; // 0 - Something must be wrong!


    // Example - Extracting the integer part and floating point part of a number -----------------
    float weight = 10.99;

    std::cout << "Float             : " << weight << std::endl;             // 10.99
    std::cout << "Integer Part      : " << (int)weight << std::endl;        // 10
    std::cout << "Fractional Part   : " << (int)((weight - (int)weight) * 10000) << std::endl; // 9899

    // Question: Why is it 9899, not 9900?
    // This is a showcase of floating point number errors. This is an approximation and will have 
    // small error. This is the limitation of floating point numbers. THIS IS VERY IMPORTANT!


    
    

}