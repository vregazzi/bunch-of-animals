#include <string_view>

#include "Cat.h"

// calls super class constructor
Cat::Cat(std::string_view name)
    : Animal{name}
{
}

// member function that causes the cat to speak
void Cat::speak()
{
    std::cout << getName() << " says: Meow"
              << "\n";
}

// member function that causes the cat to retch
void Cat::retch()
{
    std::cout << getName() << " is retching you a wet ball of fur"
              << "\n";
}
