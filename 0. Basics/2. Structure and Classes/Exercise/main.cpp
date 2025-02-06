/**
 * @file code_demo.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2025-02-02
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>

#include "records.h"

int main() {
    Student my_student(1, "Hilda Jones");
    Course my_course(7, "Physics 101", 4);
    Grade my_grade(1, 7, 'B');

    std::cout << "Student: " << my_student.get_name() << std::endl;
    std::cout << "Course: " << my_course.get_name() << std::endl;
    std::cout << "Credits: " << my_course.get_credits() << std::endl;
    std::cout << "Grade: " << my_grade.get_grade() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}