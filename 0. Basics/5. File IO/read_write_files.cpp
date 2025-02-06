/**
 * @file read_write_files.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief Reading and Writing files
 * @details This script shows how to read and write files in
 *     C++
 * @version 0.1
 * @date 2025-02-06
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <fstream>  // Library for file handling
#include <iostream>
#include <string>

int main() {
    // The ifstream type that reads file
    std::ifstream inFile;
    std::string str;
    int number;
    char letter;

    /**
     * @section Section 1 - Reading files
     * @details This section is about how to read a file
     */

    // Read the file
    inFile.open("people.txt");
    if (inFile.fail()) {
        // Throw error if cannot open the file
        std::cout << "Error: Cannot open the file. " << std::endl;
    } else {
        // Start a loop until the end of line
        // This can be obtained by `inFile.eof()`
        while (!inFile.eof()) {
            // Within the loop, we can have more than 1 
            // getline() operation. 
            // 
            // For each getline() is called, a line is read. 
            std::getline(inFile, str);
            std::cout << str << ", ";
            std::getline(inFile, str); 
            number = stoi(str);
            std::cout << number << ", ";
            std::getline(inFile, str); 
            letter = str[0];    // Collect the character by indxing
            std::cout << letter << std::endl;
        }
    }

    // Close the file
    inFile.close();

    /**
     * @section Section 2 - Writing a file
     * @details This section is about writing a the output
     *  to a file
     * 
     */
    std::ofstream outFile;
    float a = 4.333f, b = 5.302f;

    // Open a text file
    // Try to use append mode
    outFile.open("calculations.txt", std::ios_base::app);
    if (outFile.fail()) {
        std::cout << "Error: Cannot open the output file" << std::endl;
    } else {
        outFile << "a = " << a << std::endl;
        outFile << "b = " << b << std::endl;
        outFile << "a + b = " << a + b << std::endl;
        outFile << "a - b = " << a - b << std::endl;
        outFile << "a * b = " << a * b << std::endl;
        outFile.close();
        std::cout << "File written successfully. " << std::endl;
    }
}