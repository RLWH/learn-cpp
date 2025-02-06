# Flow Control
The 4 basic ways to control the flow of the programme are as follow:
- [If and Switch](./if_and_switch_case.cpp)
- [While loops and For loops](./while_and_for_loop.cpp)

# Exercise
We want to calcuate the GPA of a student from a vector. The main operation is defined as below. 
The classes header and implmenetation are also defined here. 
```{c}
int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here

    std::string student_str;
    student_str = students[0].get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
```

### Calculation of GPA
To calculate GPA, we will use the formula 
$$\text{GPA} = \frac{\text{Total Points}}{\text{Total Credits}}$$

### Grade to point mapping
|Letter Grade|Points|
|------------|------|
|A|4.0|
|B|3.0|
|C|2.0|
|D|1.0|
|F|0.0|

Here is an example: 
|Course|Credits|Grade|
|--|--|--|
|Algebra|5|B (3)|
|Physics|4|A (4)|
|English|3|C (2)|

The calculation of GPA will be
$$
\begin{aligned}
\text{GPA}&=\frac{(5 \times 3) + (4 \times 4) + (3 \times 2)}{5 + 4 + 3} \\
&=\frac{37}{12} \\
&= 3.08
\end{aligned}
$$

## Expected result
```{}
The GPA for George P. Burdell is 3.08333
The GPA for Nancy Rhodes is 3.69231
```