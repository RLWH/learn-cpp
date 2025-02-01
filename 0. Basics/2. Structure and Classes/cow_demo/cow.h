/**
 * @file cow.h
 * @author Ray Lai (ray.laiwh@gmail.com)
 * @brief
 * @version 0.1
 * @date 2025-02-01
 *
 * @copyright Copyright (c) 2025
 *
 */

// We will use pragma once to tell the compiler to include the header file
// only once.
// It is very common to include the header file in multiple source files,
// and this is not necessarily a bad practice
//
// This directive prevents an error when the compiler finds definition that
// has been already seen in the same file.
//
// Note that `pragma once` is not supported by all the compilers, so the
// alternative is to use an include guard.
// #pragma once

// Include guard
// The compiler will check if COW_H is defined.
// If not, then include the following header code.
#ifndef COW_H
#define COW_H

#include <string>

enum class Cow_purpose { dairy, meat, hide, pet };

class Cow {
private:
    std::string name;
    int age;
    Cow_purpose purpose;

public:
    Cow(std::string name_i, int age_i, Cow_purpose purpose_i);

    std::string get_name() const;
    int get_age() const;
    Cow_purpose get_purpose() const;

    void set_name(std::string new_name);
    void set_age(int new_age);
    void set_purpose(Cow_purpose new_purpose);
};

#endif  // COW_H