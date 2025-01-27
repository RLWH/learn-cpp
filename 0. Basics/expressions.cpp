/**
 * @file expressions.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief Expressions, Assignments, and Operations
 * @details
 * Expressions is a symbolic of calculations like in algebra.
 *  - It contains temporary data storage units
 *  - It may contains constants, variables, and operators
 *  - Every expression must produce a value
 * 
 * Assignment is a line of code that assigns a value to a variable
 *  - It must contain a LHS and RHS expression
 *  - The LHS expression must be able to hold a value
 *  - The data types of both expressions must be matched. 
 *      - This is not enforced by a compiler (It will not throw compilation error)
 *      - It's programmer's responsibility
 * 
 * Operations
 *  - Arithmetic: +, -, *, /, %
 *  - Bitwise: & (bitwise-and), | (bitwise-or), ~ (bitwise-not), ^ (bitwise-xor)
 *  - Logical: && (logical-and), || (logical-or), ! (logical-not)
 *  - Relational: ==, !=, >, <, >=, <=
 *  - Pointer: * (indirection, dereference to its right), & (address of), -> (access to member of class)
 * 
 * More to read: https://en.cppreference.com/w/cpp/language/operator_precedence
 * 
 * @version 0.1
 * @date 2025-01-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */