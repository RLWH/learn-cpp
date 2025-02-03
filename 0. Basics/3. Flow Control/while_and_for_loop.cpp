/**
 * @file while_and_for_loop.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief While loop and for loop
 * @version 0.1
 * @date 2025-02-03
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include <vector>

int main() {

    /**
     * @brief While loop
     * @details 
     * Note that while loop has 2 forms. 
     * - While loop: Evaluating the condition before running
     * - Do-while loop: Evaluating the condition at the end
     */
    // Create a vector of ints
    std::vector<int> numbers = {12, 25, 31, 47, 58};

    // Define an iterator
    // This iterator will be used to traverse a vector. 
    // Note that iterator is usually be defined with their classes. 
    // In this case, it is std::vector<int>::iterator. It might be too clumsy
    // to write the full type. Here is the `auto` keyword comes in. 

    std::vector<int>::iterator ptr = numbers.begin();  // Define as full type
    auto ptr2 = numbers.begin();                       // Use the `auto` keyword to infer the type

    // For a while loop, it will iterate until the condition is false
    // In this case, it would be the pointer not equal to numbers.end()
    // The .end() function returns the pointer to the position after the last element
    // of the vector. 
    while (ptr != numbers.end()) {
        std::cout << (int)(*ptr) << " ";

        // Move the pointer forward by 1 position
        // This can be done by using next(ptr, 1)
        ptr = next(ptr, 1);
    }
    std::cout << std::endl;

    
    /**
     * @brief do-while loop
     * @details To use the do-while loop, we have to be absolutely sure
     *          the iteration is safe to run. 
     *          We will also use the index approach to write this loop
     */

    int i = 0;
    do {
        std::cout << numbers[i] << " ";
        i++;
    } while (i < numbers.size());
    std::cout << std::endl;


    /**
     * @brief For loop
     * @details For loop is used when we know the range of elements that we need
     *          to iterate in advanced. 
     *          In this example, we will calculate the average value of the numbers
     *          in the numbers vector defined above. 
     * 
     */

    float average;
    std::vector<int> numbers_2 = {12, 25, 31, 47, 58};

    average = 0.0f;     // Remember we need to have a trailing `f` to initialise float. 

    // For loop has 3 parts
    // for (initialisation; Condition to iterate; Increment)
    for (int i = 0; i < numbers_2.size(); i++) {
        average += numbers[i];
    }
    average /= numbers.size();

    std::cout << "The average is " << average << std::endl;

    /**
     * @brief Range-based For loop
     * @details A range-based for loop is introduced in C++11. 
     *          It works by traversing each element in the range that defined with an iterator. 
     * 
     */

    // For each x in numbers, we run some operation
    // Note that in each iteration, we will copy the value of the variable into x
    // If we have a large object, we should use a reference instead. 
    average = 0;
    for (auto x : numbers) {
        average += x;
    }
    average /= numbers.size();

    std::cout << "The average is " << average << std::endl;

    
}