/**
 * @file arrays.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief Arrays
 * @details
 *
 * Arrays is an important tool in C++. There are many useful properties for
 * array.
 * - Arrays are collection of data. Each element is accessible by index.
 * - Elements are homogenous, meaning they are in the same data type
 * - Arrays are fixed in size. We cannot resize them. If we need to , we need to
 *   implement ourselves, or use `vector` in Standard Template Library
 * - Elements are continuous in memory.
 *
 * @version 0.1
 * @date 2025-01-27
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>

// Using macro to define the constant array size
// #define AGE_LENGTH 4

int main() {

    // Define the array size here
    // Note that we use the type size_t
    const size_t AGE_LENGTH = 4;

    // An array of integers that store the age of 4 people
    int age[AGE_LENGTH];

    // Assign the values to the array
    age[0] = 25;
    age[1] = 32;
    age[2] = 27;
    age[3] = 22;

    std::cout << "age[0]: " << age[0] << std::endl;
    std::cout << "age[1]: " << age[1] << std::endl;
    std::cout << "age[2]: " << age[2] << std::endl;
    std::cout << "age[3]: " << age[3] << std::endl;
    

    // Alternatively - We can initialise the array with values
    // We will cover type casting later
    // Note that the auto type inference does not work for arrays
    float temperature[] = { 31.5, 32.7, 38.9 };







}