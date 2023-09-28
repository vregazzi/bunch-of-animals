#pragma once

// Cat.h
// Class: Cat

// Standard Library Headers
#include <string>
#include <string_view>
#include <iostream>
#include "Animal.h"

class Cat : public Animal
{
public:
    // Constructor - uses member initializer
    explicit Cat(std::string_view name);

    // member function that causes the cat to speak
    void speak();

    // member function that causes the cat to hack up a hairball
    void retch();

private:
    std::string m_name; // data member containing the cat's name

}; // end class Cat
