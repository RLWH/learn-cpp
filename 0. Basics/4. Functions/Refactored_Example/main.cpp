// Learning C++
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño

#include <iostream>
#include <vector>

#include "records.h"

int main() {
    float GPA = 0.0f;
    int id;

    // Create Student Records
    StudentRecords *student_records = new StudentRecords();

    // Add Students
    student_records->add_student(1, "George P. Burdell");
    student_records->add_student(2, "Nancy Rhodes");

    // Add Courses
    student_records->add_course(1, "Algebra", 5);
    student_records->add_course(2, "Physics", 4);
    student_records->add_course(3, "English", 3);
    student_records->add_course(4, "Economics", 4);

    // Add Grades
    student_records->add_grade(1, 1, 'B');
    student_records->add_grade(1, 2, 'A');
    student_records->add_grade(1, 3, 'C');
    student_records->add_grade(2, 1, 'A');
    student_records->add_grade(2, 2, 'A');
    student_records->add_grade(2, 4, 'B');
    
    // Prompt
    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    GPA = student_records->get_GPA(id);

    // TODO: Get student name
    std::cout << "The GPA for " << student_records->get_student_name(id) << " is " << GPA << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}