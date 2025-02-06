# Challenge
This challenge is to create a set of records that record the students, the courses that they have taken, and the
grade of the course. 

The header file definitions are given as below. Our task is to write the implementation of the classes. 

### Specification
- Grades will be A, B, C, D, or F

# Header
The header file is given as follow
```{c}
#pragma once

#include <string>

class Student{
private:
    int id;
    std::string name;

public:
    Student(int the_id, std::string the_name);
    int get_id() const;
    std::string get_name() const;
};

class Course{
private:
    int id;
    std::string name;
    unsigned char credits;

public:
    Course(int the_id, std::string the_name, unsigned char the_credits);
    int get_id() const;
    std::string get_name() const;
    int get_credits() const;
};

class Grade{
private:
    int student_id;
    int course_id;
    char grade;

public:
    Grade(int sid, int cid, char grd);
    int get_student_id() const;
    int get_course_id() const;
    char get_grade() const;
};
```