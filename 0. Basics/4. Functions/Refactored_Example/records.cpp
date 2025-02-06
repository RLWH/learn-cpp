/**
 * @file records.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief Implementation of Student, Course, and Grade classes
 * @details To find the implementation of each of the class, search for the
 * @section in the script
 * @version 0.1
 * @date 2025-02-04
 *
 * @copyright Copyright (c) 2025
 *
 */

#include "records.h"

/**
 * @section Implementation of Student class
 *
 */

/**
 * @brief Construct a new Student:: Student object
 *
 * @param the_id Student ID
 * @param the_name Student Name
 */
Student::Student(int the_id, std::string the_name) {
    id = the_id;
    name = the_name;
}

/**
 * @brief Getter of ID
 *
 * @return int
 */
int Student::get_id() const { return id; }

/**
 * @brief Getter of name
 *
 * @return std::string
 */
std::string Student::get_name() const { return name; }

/**
 * @section Implementation of the Course class
 *
 */

/**
 * @brief Construct a new Course:: Course object
 *
 * @param the_id        Course ID
 * @param the_name      Course Name
 * @param the_credits   Course Credit
 */
Course::Course(int the_id, std::string the_name, unsigned char the_credits) {
    id = the_id;
    name = the_name;
    credits = the_credits;
}

/**
 * @brief Getter of Course ID
 *
 * @return int
 */
int Course::get_id() const { return id; }

/**
 * @brief Getter of course name
 *
 * @return std::string
 */
std::string Course::get_name() const { return name; }

/**
 * @brief Getter of course credit
 *
 * @return int
 */
int Course::get_credits() const { return credits; }

/**
 * @section Implementation of Grade class
 *
 */

/**
 * @brief Construct a new Grade:: Grade object
 *
 * @param sid   Student ID
 * @param cid   Course ID
 * @param grd   Grade of the course
 */
Grade::Grade(int sid, int cid, char grd) {
    student_id = sid;
    course_id = cid;
    grade = grd;
}

/**
 * @brief Getter of Student ID
 *
 * @return int
 */
int Grade::get_student_id() const { return student_id; }

/**
 * @brief Getter of course ID
 *
 * @return int
 */
int Grade::get_course_id() const { return course_id; }

/**
 * @brief Getter of course grade
 *
 * @return char
 */
char Grade::get_grade() const { return grade; }

/**
 * @section Implementation of StudentRecords
 *
 */

/**
 * @brief           Match a grade to points
 *
 * @param grade     Grade
 * @return float    Points
 */
float StudentRecords::get_num_grade(char grade) const {
    switch (grade) {
        case 'A':
            return 4.0;
        case 'B':
            return 3.0;
        case 'C':
            return 2.0;
        case 'D':
            return 1.0;
        case 'F':
            return 0.0;
    };
}

/**
 * @brief Add Student into StudentRecords
 *
 * @param sid   Student ID
 * @param name  Student Name
 */
void StudentRecords::add_student(int sid, std::string name) {
    students.push_back(Student(sid, name));
}

/**
 * @brief Add a Course into StudentRecords
 *
 * @param cid           Course ID
 * @param course_name   Course Name
 * @param credits       Credit
 */
void StudentRecords::add_course(int cid, std::string course_name,
                                unsigned char credits) {
    courses.push_back(Course(cid, course_name, credits));
}

/**
 * @brief Add a Grade into StudnetRecords
 *
 * @param sid           Student ID
 * @param cid           Course ID
 * @param grade         Grade
 */
void StudentRecords::add_grade(int sid, int cid, char grade) {
    grades.push_back(Grade(sid, cid, grade));
}

/**
 * @brief To get the GPA score from a given student ID
 * @details
 * 1. Define a sum of points
 * 2. Define a sum of credits
 * 3. For selected student, loop all the grades of all the courses
 * 4. For the mapping between grades and points, use `switch`
 * 
 * @param sid       Student ID
 * @return float    GPA Score
 */
float StudentRecords::get_GPA(int sid) const {

    float total_points;
    float total_credits;

    // Loop all the grades
    // If the grade of the student_id is equal to the selected id,
    // then add the total points and credits to the intermediate variables
    for (auto &grade : grades) {
        // Check if student_id is the selected id
        if (grade.get_student_id() == sid) {
            // Add credit to total credits
            // Here we need to first get the course credit

            // TODO: Get course credit
            float course_credit = get_course_credits(grade.get_course_id());
            total_credits += course_credit;

            // Add points to total points
            char g = grade.get_grade();

            // TODO: num_grade
            float num_grade = get_num_grade(grade.get_grade());
            total_points += num_grade * course_credit;
        }
    }

    return (total_points / total_credits);
}

/**
 * @brief Getter - Get the student name from a given Student ID
 *
 * @param sid           Student ID
 * @return std::string  Student Name
 */
std::string StudentRecords::get_student_name(int sid) const {
    int i = 0;
    while (i < students.size() && students[i].get_id() != sid) i++;

    return students[i].get_name();
}

/**
 * @brief Get the course credits from a given course ID
 *
 * @param cid               Course ID
 * @return unsigned char    Course Credit
 */
unsigned char StudentRecords::get_course_credits(int cid) const {
    for (auto c : courses) {
        if (c.get_id() == cid) {
            return c.get_credits();
        }
    }
}