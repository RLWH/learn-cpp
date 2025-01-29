/**
 * @file auto_type_inference.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief Auto Type Inference
 * @details
 * In C++11, we can use auto type inference as a shortcut to declare data types. 
 * The only requirement is we have to declare the values when creating the variables. 
 * 
 * @version 0.1
 * @date 2025-01-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <typeinfo>

int main() {
    auto a = 8;             // A small integer
    auto b = 12345678987;   // A very large integer
    auto c = 3.14f;         // Floating point number
    auto d = 3.14;          // Double (without Trailing `f`)
    auto e = true;          // Boolean constant `true`
    auto f = 'd';           // Single character `d`
    auto g = "C++ rocks";   // String, enclosed by double quotes

    // Print out all the types of the variables above
    // We will use the typeid operator from typeinfo STL

    std::cout << "a: type: " << typeid(a).name() << std::endl; // i: int
    std::cout << "b: type: " << typeid(b).name() << std::endl; // l: Long
    std::cout << "c: type: " << typeid(c).name() << std::endl; // f: Float
    std::cout << "d: type: " << typeid(d).name() << std::endl; // d: Double
    std::cout << "e: type: " << typeid(e).name() << std::endl; // b: Bool
    std::cout << "f: type: " << typeid(f).name() << std::endl; // c: Char
    std::cout << "g: type: " << typeid(g).name() << std::endl; // PKc: Pointer to Constant Char


}