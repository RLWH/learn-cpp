# File I/O
In this section, we will cover important concepts such as:
- File Stream
- Read a file
- Write a file

# fstream header
To include the library of file stream, we need to include the `fstream` header. This header is part of the input/output library, and it provides a number of classes to handle files. 
```{c++}
#include <fstream>
```

### ifstream
We will use an `ifstream` object to stream the input from a file. Then, we will use different variables to store the values coming in from the file. 

This is very similar to the `cin` object. 
```c
std::ifstream inFile;

// Store input values
std::string str;
int number;
char letter;
```

# Read a file
The process of reading a file is as follow: 
1. Open the file
2. Check if the file can open. Throw an error if not. (Check with `inFile.fail()`)
3. Start a loop. Continue the loop until the EOF character is read
    1. Get a line ([`.getline()`](https://cplusplus.com/reference/string/string/getline/)) from the text file. This function is from the string header. It takes one line of text from the stream in the 1st argument, and replaces the content of the string in the 2nd argument. 
        - We can use this function with `cin` as our input stream if we want to read the complete line of a text file, instead of separate words from terminal. 
    2. Print the line on the screen. 
4. Once the operation is done, close the file. It is important to close the file once it is no longer needed. A

### Casting data types
When reading the data from text file, they will be in string format. Here are some functions we can use for casting: 
- `stoi()`: String-to-Integer
- `stol()`: String-to-Long
- `stoll()`: String-to-Long-Long
- `stoul()`: String-to-Unsighed-Long
- string[i]: Use index to collect the letter in the string

More can be found in [this](https://en.cppreference.com/w/cpp/string/basic_string#Numeric_conversions) guide. 

# Writing a file
For writing a file, the process is similar. The only differences is we now need an Output File Stream `ofstream` type object to handle the operations. Also, instead of doing `readline()`, we directly send the text to the output stream by using `<<` operator. 

### ofstream
The ofstream object contains a library of function to help us writing the stream to the file. It works similar to writing to console, but to a file instead. 
```c++
std::ofstream outFile;

// Writing things to a file
outFile << "A text message to a file" << std::endl;
```

### Different mode of file usage
As specified in the [documentation](https://cplusplus.com/reference/ios/ios_base/openmode/), there are different opening modes of the `ofstream`. The default is truncate mode (`trunc`). 
- `app`: (append) Set the stream's position indicator to the end of the stream before each output operation.
- `ate`: (at end) Set the stream's position indicator to the end of the stream on opening.
- `binary`: (binary) Consider stream as binary rather than text.
- `in`: (input) Allow input operations on the stream.
- `out`: (output) Allow output operations on the stream.
- `trunc`: (truncate) Any current content is discarded, assuming a length of zero on opening.