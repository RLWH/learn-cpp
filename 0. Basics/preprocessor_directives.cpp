/**
 * @file preprocessor_directives.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief Preprocessor Directives
 * @details
 * C++ is a compiled language, code needs to be compiled by a compiler and turn into machine code. 
 * It goes through a pipeline of software tools, which extract the semantic elements
 * of the code. 
 * 
 * One of the 1st steps that the code will go through is the preprocessor. 
 * - It is a piece of software and part of the compiler toolchain. 
 * - There are several directives addressed to the preprocessor, which contains 
 *   information about what to add or remove in the code
 * - The compiler will receive a modified version of code
 * 
 * Directives include: 
 * - #include
 * - #define
 * - #ifdef
 * 
 * Note: All directives start with the `#` character
 * @version 0.1
 * @date 2025-01-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */

// Directive 1 - #include --------------------------------------
// A directive include to tell the preprocessor
// to include the code from iostream
// Note: For the compiler, it actually inserts the WHOLE CODE
//       into this line!
// -------------------------------------------------------------
#include <iostream>

// Include String Library
#include <string>

// The C-Standard Library, this is written in C. 
// This header is part of the type support library, providing fixed width integer types and 
// part of C numeric limits interface.
// 
// C is not C++, but these libraries have been re-written to support
// C++. 
#include <cstdint>

// Directive 2 - #define ---------------------------------------
// The another directive to introduce is #define. 
// This directive defines symbols to mean whatever you type at the right. 
// These symbols are called macros. 
// What this directive does is basically FIND AND REPLACE. 
// e.g. Define CAPACITY to 5000 will replace all `CAPACITY` to `5000` in the code. 
// -------------------------------------------------------------
#define CAPACITY 5000
#define DEBUG

// Directive 3 - #ifdef ----------------------------------------
// The #ifdef directive controls the conditional inclusion of code. 
// - #ifdef can be added anywhere in the code, be it the beginning of the code,
//   or the middle of code block
// - The preprocessor search for the #ifdef directive and decide to add the 
//   code in or not. 
// -------------------------------------------------------------

int main() {

    // Example - Declare a int32 type of integer
    int32_t large = CAPACITY;

    #ifdef DEBUG
    std::cout << "We are now in debug mode. #define DEBUG directive has defined DEBUG. " << std::endl;
    #endif

    // Example - Declare an unsighed 8-bit integer here
    uint8_t small = 37;

    // Add two results and store back to large
    large += small;      // equivalent to large = large + small;

    std::cout << "The large integer is: " << large << std::endl;

    return (0);
}


                        

