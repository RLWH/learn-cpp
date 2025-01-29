/**
 * @file enums.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief Enums (Enumerations)
 * @details
 *
 * Enumerations - It is a way to define a set of named integer constants
 * - Values are assigned consecutively from 0
 * - Enumerations is inherited from C programming language.
 * - Usually exists in the global scope, which could lead to naming conflicts
 * - C-Style Enums also lack strong type checking, which lead to limited type
 * safety
 *
 * In C++ 11 standard, the Enum class is introduced, also known as Scoped Enums
 * - It is strongly typed
 * - Encapsulated within a class scope, this can reduce namespace conflict
 * - This is a better practice in modern C++
 *
 * @version 0.1
 * @date 2025-01-29
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <cstdint>
#include <iostream>

// Define Enums
enum cow_purpose { dairy, meat, hide, pet };

// We can use enum class to avoid the conflict of enums
enum class cow_purpose_c { dairy, meat, hide, pet };
enum class grocery_section_c { canned, frozen, meat, laundry, dairy, bakery };

int main() {
    int a;

    a = meat;

    std::cout << "a = " << a << std::endl;  // a = 1, which is encoding for meat

    // If we carelessly declare an integer also name meat
    int meat = 8;
    a = meat;
    std::cout << "a = " << a << std::endl;  // a = 8!

    // To use the values from enum class, we need to use the scope resolution operator ::
    // Enum classes are strongly typed. We can define the type as the enum type
    grocery_section_c d = grocery_section_c::dairy;
    std::cout << "d = " << (int)d << std::endl;
}