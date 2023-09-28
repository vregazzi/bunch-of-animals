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

    // member function that sets name of the cat
    // std::string_view is a read-only view of a string introduced in C++17
    void setName(std::string_view name);

    // member function that retrieves the cat's name
    const std::string &getName() const;

    // member function that causes the cat to speak
    void speak();

    // member function that causes the cat to hack up a hairball
    void retch();

private:
    std::string m_name; // data member containing the cat's name

}; // end class Cat
