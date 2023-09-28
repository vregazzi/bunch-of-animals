#include <string_view>

#include "Dog.h"
// constructor
Dog::Dog(std::string_view name) : Animal{name}
{
    m_name = name;
}

// member function that causes the dog to speak
void Dog::speak()
{
    std::cout << m_name << " says: Bark"
              << "\n";
}

// member function that causes the dog to fetch
void Dog::fetch()
{
    std::cout << m_name << " is fetching you a wet, chewed-up stick"
              << "\n";
}
