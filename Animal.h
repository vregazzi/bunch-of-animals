#pragma once
#include <string>
#include <string_view>
#include <iostream>

class Animal
{
public:
    explicit Animal(std::string_view name);
    const std::string &getName() const;
    void setName(std::string_view name);
    virtual void speak() = 0;
    // overridable member function that causes the animal to speak
private:
    std::string m_name;
};