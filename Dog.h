#pragma once

// Dog.h
// Class: Dog

// Standard Library Headers
#include <string>
#include <string_view>
#include <iostream>
#include "Animal.h"

class Dog : public Animal
{
public:
    // constructor
    explicit Dog(std::string_view name);

    // member function that sets the name of dog
    // std::string_view is a read-only view of a string introduced in C++17
    void setName(std::string_view name);

    // member function retrieves the dog's name
    const std::string &getName() const;

    // member function that causes the dog to speak/bark
    void speak();

    // member function that causes the dog to fetch a stick
    void fetch();

private:
    std::string m_name; // data member containing the dog's name

}; // end class Dog
