// Learning C++
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño

#include <iostream>
#include <vector>

#include "records.h"

int main() {
    float GPA = 0.0f;
    int id;

    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                     Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {
        Course(1, "Algebra", 5), Course(2, "Physics", 4),
        Course(3, "English", 3), Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'),
                                 Grade(1, 3, 'C'), Grade(2, 1, 'A'),
                                 Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here
    /**
     * @brief GPA calculation
     * @details
     * 1. Define a sum of points
     * 2. Define a sum of credits
     * 3. For selected student, loop all the grades of all the courses
     * 4. For the mapping between grades and points, use `switch`
     *
     */

    int i = 0;
    while (i < students.size() && students[i].get_id() != id) i++;

    std::string student_str;
    student_str = students[i].get_name();  // Change this to the selected student's name

    float total_points;
    float total_credits;

    // Loop all the grades
    // If the grade of the student_id is equal to the selected id,
    // then add the total points and credits to the intermediate variables
    for (auto grade : grades) {
        // Check if student_id is the selected id
        if (grade.get_student_id() == id) {
            // Add credit to total credits
            // Here we need to first get the course credit
            int course_credit;
            for (auto c : courses) {
                if (c.get_id() == grade.get_course_id()) {
                    course_credit = c.get_credits();
                    break;
                }
            }
            total_credits += course_credit;

            // Add points to total points
            char g = grade.get_grade();

            switch (g) {
                case 'A':
                    total_points += 4.0 * course_credit;
                    break;
                case 'B':
                    total_points += 3.0 * course_credit;
                    break;
                case 'C':
                    total_points += 2.0 * course_credit;
                    break;
                case 'D':
                    total_points += 1.0 * course_credit;
                    break;
                case 'F':
                    total_points += 0.0 * course_credit;
                    break;
            };
        }
    }

    GPA = total_points / total_credits;

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}