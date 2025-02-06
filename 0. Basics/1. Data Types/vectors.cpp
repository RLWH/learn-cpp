/**
 * @file vectors.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2025-02-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <vector>

int main() {

    /**
     * @section Vectors with integers
     * @brief This section shows how to create a vector of integers
     * 
     */

    // Declare a vector
    std::vector<int> primes;

    // Vectors come empty by default
    std::cout << "Size of primes: " << primes.size() << std::endl;

    // There are different ways to add elements to vectors: 
    //  - push_back()
    //  - push_front() - Always require memory reallocation (O(n))

    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);

    std::cout << "Size of primes: " << primes.size() << std::endl;

    // The vector STL class supports the square bracket operator `[]`
    // to extract values from the container
    std::cout << "The second element of primes: " << primes[1] << std::endl;

    // We can also change value just like primitive arrays
    primes[1] = 13;
    std::cout << "The second element of primes: " << primes[1] << std::endl;

    // Access to the first element
    // The .begin() function returns the iterator to the first element. 
    // An iterator works like a pointer. In fact, pointer is an iterator. 
    // To show the value that the pointer is pointing to, we need to dereference it. 
    std::cout << "The first element of primes: " << *primes.begin() << std::endl;

    // Access to the last element
    // The .end() function returns the iterator after the last element. 
    // To obtain the last element, we need to reduce the iterator by 1
    std::cout << "The last element of primes: " << *(primes.end() - 1) << std::endl; 

    // Alternatively, we can use the prev() to shift the pointer back by 1 position
    std::cout << "The second last element of primes: " << *(prev(primes.end(), 2)) << std::endl; 

}