/**
 * @file passing_parameters.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief Examples of different ways of passing parameters to functions
 * @details We will demonstrate 3 different ways to pass arguments
 *      1. Pass by value (Default)
 *      2. Pass by Pointer
 *      3. Pass by reference
 * @version 0.1
 * @date 2025-02-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>

/**
 * @brief Calculate the square of input value a
 * 
 * @param a Input value
 * @return int 
 */
int square(int a) {
    a = a * a;  // Although they are all variable a
                // C++ copies the value into here. 
                // Nothing outside will be changed
    return a;
}

/**
 * @brief Swap variable a and b. We will implement this by pass-by-pointer. 
 * 
 * @param a 
 * @param b 
 */
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * @brief Swap variable a and b. We will implement by using pass-by-reference. 
 * 
 * @param a 
 * @param b 
 */
void swap(int &a, int &b) {
    int tmp = a;    // No need to de-reference because reference is just an alias. 
    a = b;
    b = tmp;
}

int main() {
    int a = 9, b;   // a initialised to 9, b uninitialised

    // TODO: Square
    b = square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    // TODO: Swap
    swap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    // TODO: Swap
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
}