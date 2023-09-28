#include <string_view>

#include "Dog.h"
// constructor calls super class constructor
Dog::Dog(std::string_view name)
    : Animal{name}
{
}

// member function that causes the dog to speak
void Dog::speak()
{
    std::cout << getName() << " says: Bark"
              << "\n";
}

// member function that causes the dog to fetch
void Dog::fetch()
{
    std::cout << getName() << " is fetching you a wet, chewed-up stick"
              << "\n";
}
