/**
 * @file flow_control.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief Flow control examples
 * @details
 * 
 * This script will cover the if statement and switch statement
 * 
 * @version 0.1
 * @date 2025-02-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>

int main() {
    /**
     * @section If Statement
     * 
     */
    int a = 1023;       // Initialise an integer 1,023
    bool flag = false;  // Initialise a flag false
    char lttr = 'd';    // Initialise a letter 'd'

    // Note that if a block of code only has one line, we can omit the bracket {}
    if (a > 1000) 
        std::cout << "a is greater than 1,000" << std::endl;


    // Check if a is even or odd --------------------------------------------------------------
    // A note here is in C++, 0 means false. Therefore, we don't need to write the "== 0" part
    // If the value is equal to 0, it means false already. 
    if (a % 2)
        // If a % 2 is true, which means the remainder is not 0
        // Then a is an odd number
        std::cout << "a is an odd number" << std::endl;
    else
        // If a % 2 is false, which means the remainder is 0
        // Then a is an even number
        std::cout << "a is an even number" << std::endl;




    // Test if the letter is a vowel  ---------------------------------------------------------
    std::cout << "The letter " << lttr << " is";
    if (lttr != 'a' && lttr != 'e' && lttr != 'i' && lttr != 'o' && lttr != 'u' && 
        lttr != 'A' && lttr != 'E' && lttr != 'I' && lttr != 'O' && lttr != 'U')
        std::cout << " not";
    std::cout << " a vowel. " << std::endl;

    // Check the boolean flag  ----------------------------------------------------------------
    if (flag)
        std::cout << "The flag is true!" << std::endl;
    else
        std::cout << "The flag is false!" << std::endl;



    /**
     * @brief Switch Statement
     * @details In this section, we will build a calculator that takes 
     *          in 2 variables. 
     *          We will calculate the result of
     *          operand_1 `operator` operand_2
     * 
     * Some notes on std::flush: 
     * std::flush is a manipulator may be used to produce an incomplete line of output immediately, 
     * e.g. when displaying output from a long-running process, logging activity of 
     * multiple threads or logging activity of a program that may crash unexpectedly. 
     * An explicit flush of std::cout is also necessary before a call to std::system, 
     * if the spawned process performs any screen I/O (a common example is std::system("pause") on Windows). 
     * 
     * In most other usual interactive I/O scenarios, std::endl is redundant when used with std::cout 
     * because any input from std::cin, output to std::cerr, or program termination forces a call to std::cout.flush().
     */
    std::cout << "Let's try a quick and dirty calculator in this programme too!" << std::endl;
    
    float operand_1, operand_2, result;
    char operation;

    std::cout << "Enter operand 1: " << std::flush;
    std::cin >> operand_1;
    std::cout << "Enter operand 2: " << std::flush;
    std::cin >> operand_2;
    std::cout << "Choose an operation [ + , -, *, / ]" << std::flush;
    std::cin >> operation;

    switch(operation) {
        case '+':
            result = operand_1 + operand_2;
            break;
        case '-': 
            result = operand_1 - operand_2;
            break;
        case '*':
            result = operand_1 * operand_2;
            break;
        case '/': 
            result = operand_1 / operand_2;
            break;
        default:
            // Specifying a condition where the operation character cannot be matched. 
            // We default by setting to '+'
            result = operand_1 + operand_2;
            break;
    }

    std::cout << "The result is " << result << std::endl;


    /**
     * @brief While loops
     * 
     */
    


    
}