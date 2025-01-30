/**
 * @file classes.cpp
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief Class
 * @details
 *
 * Classes are basic element of Object-oriented Programming.
 * - They are intended for implementing models.
 * - They contain two types of members: Data and Functions.
 *
 * There are some properties of a class is different from a struct
 * - By default, data members and functions are private.
 * - This means we cannot access the member as obj.data or obj.func() directly,
 * unless they are declared public
 * - Hiding the members in private is called encapsulation.
 *
 * @version 0.1
 * @date 2025-01-30
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include <string>

enum class Cow_purpose { dairy, meat, hide, pet };

class Cow {
    // encapsulation
   private:
    std::string name;
    int age;
    Cow_purpose purpose;

   public:
    // Constructor - A constructor is called when the object is created.
    // There is always an implicit constructor which simply create the objects
    // and allocating memory for data members,
    //
    // However, we can always write additional version of Constructors by taking
    // a custom set of parameters.
    // This is known as overloading a function.
    Cow(std::string name_i, int age_i, Cow_purpose purpose_i) {
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    };

    // A getter is not supposed to modify anything in the class.
    // Therefore, it is a good practice to define `const` after the parameter
    // list to prevent the progammer from modifying any object inside the
    // function
    //
    // This technique is known as "const correctness"
    std::string get_name() const { return name; };
    int get_age() const { return age; };
    Cow_purpose get_purpose() const { return purpose; };

    // Setters
    void set_name(std::string new_name) {
        name = new_name;
    };

    void set_age(int new_age) {
        age = new_age;
    };

    void set_purpose(Cow_purpose new_purpose) {
        purpose = new_purpose;
    };
};

int main() {
    // Using the structure
    Cow my_cow("Hello", 5, Cow_purpose::dairy);

    // Access the data members
    // my_cow.age = 5;
    // my_cow.name = "Hello";
    // my_cow.purpose = Cow_purpose::dairy;

    my_cow.set_name("hahaha");

    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose()
              << " cow. " << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age()
              << " years old. " << std::endl;
}