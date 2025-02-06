# Functions
Functions provide modularity to our code. It virtually exists in every programming language. 
- Functions are procedural blocks that returns a value. 
- It usually receives a fixed number of arguments of specific types, but some functions use **a variable number of arguments**
- There is a distinction between the term **parameters** and **arguments** here. 
    - **Arguments** are the variables or constants that are sent to the function when it's called. 
    - **Parameters**, on the other hand, are the variables in the function that take the values of their arguments 
- Functions may be global or be member of a class. It is the same thing we called ***methods*** in Java or Python

# Function Parameters
In many programming languages, we can pass the parameters **by value** or **by reference**. 

C++ implements 3 variants of this: 
1. **Normally, arguments are passed by value.** This means inside the function, we have copies of the values passed in. We cannot modify the original values from the outer scope. 
2. We can also **pass by Pointer**. This means we may send the address of the variable as an argument. This will give us the power to access the original variable from inside the function. ***(Could be dangerous if not handled properly!)***
3. Lastly, we can **pass argument by references**. This is similar to **pass by pointer**, but the limitations of references often make this a safer option. 

For the example of implementation, refer to [passing_parameters.cpp](./passing_parameters.cpp)

## Example
We will refactor the GPA exercises that we have done in Section 3. What we will do are:
- We define a class called `StudentRecords` to encapsulate the vector into the class. The student vector will become a data member in the class
- Define Setters and Adders in `StudentRecords`, such that we are not accessing the data members directly
- Create function to map the grades to points, instead of doing it in the main function
- Define the functions in classes 