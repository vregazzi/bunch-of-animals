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

    // member function that causes the dog to speak/bark
    void speak();

    // member function that causes the dog to fetch a stick
    void fetch();

private:
    std::string m_name; // data member containing the dog's name

}; // end class Dog
