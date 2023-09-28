#include <string_view>

#include "Cat.h"

Cat::Cat(std::string_view name) : Animal{name}
{
    m_name = name;
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
