#include <string_view>

#include "Cat.h"

Cat::Cat(std::string_view name) : Animal{name}
{
    m_name = name;
}

// member function that sets name of the cat
void Cat::setName(std::string_view name)
{
    m_name = name; // replace m_name's value with passed in name
}

// member function that retrieves the cat's name
const std::string &Cat::getName() const
{
    return m_name; // return m_name's value
}

// member function that causes the cat to speak
void Cat::speak()
{
    std::cout << m_name << " says: Meow"
              << "\n";
}

// member function that causes the cat to retch
void Cat::retch()
{
    std::cout << m_name << " is retching you a wet ball of fur"
              << "\n";
}
