/**
 * @file constants.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief Constants
 * @details
 * 
 * There are many ways to declare constants in C++. 
 * We have introduced the #define directives in `preprocessor_directives.cpp`. 
 * While that is one of the ways to define constants, it may not be the best way
 * as it lack of compiler supports. 
 * 
 * For example, there is no type checking when using #define. 
 * 
 * A better way to do this is by declaring `const` qualifier
 * - The `const` qualifier is used in regular variable declaration
 * - It declares a specific type
 * 
 * @version 0.1
 * @date 2025-01-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>

int main() {

    const int a = 5;

}