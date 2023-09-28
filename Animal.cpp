#include <string_view>

#include "Animal.h"
Animal::Animal(std::string_view name)
{
    m_name = name;
}

void Animal::setName(std::string_view name)
{
    m_name = name; // replace m_name with value passed in name
}

const std::string &Animal::getName() const
{
    return m_name; // return m_name's value
}

// overridable member function that causes the animal to speak
void Animal::speak()
{
}