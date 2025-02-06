# Data Types
-   [Variables](./variables.cpp)
-   [Auto Type Inference](./auto_type_inference.cpp)
-   [Preprocessor Directives](./preprocessor_directives.cpp)
-   [Constants](./constants.cpp)
-   [Arrays](./arrays.cpp)
-   [Strings](./strings.cpp)
-   [Type Casting](./type_casting.cpp)

# A peek into STL vector
We have learnt about arrays in this section, and more importantly, we have learnt about their limitation of primitive arrays. 

In practice, when we are using array, we will not use primitive arrays due to its limitation (e.g. fixed size array, unable to expand). Instead, we will use STL vector. 

### What is Standard Template Library (STL)
The C++ Standard Template Library (STL) is a **set of template classes and functions** that **provides the implementation of common data structures and algorithms such as lists, stacks, arrays, sorting, searching, etc.** It also provides the iterators and functors which makes it easier to work with algorithms and containers.

STL was originally designed by Alexander Stepanov and was later accepted as the part of C++ standard in C++ 98. It is a generalized library so we can use it with almost every data type without repeating the implementation code.

***(Soruce: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/)***


### STL Vector
- STL Vectors are a generalised dynamic-size containers. The size is resizible in case we want to add elements or remove elements
- The memory required for vectors is managed for the developer. We do not need to manaully allocate or free memory. However, if the objects put inside the vector are manually allocated memory, we still need to free that memory up. 
- Vector is a generic container class. It means vectors can be implemented for storing any type of element. e.g. ints, flots, doubles, strings, or objects with their own classes. 
