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

}; // end class Dog
