#include <string_view>

#include "Dog.h"
// constructor
Dog::Dog(std::string_view name) : Animal{name}
{
    m_name = name;
}

// member function that sets the name of the dog
void Dog::setName(std::string_view name)
{
    m_name = name; // replace m_name with value passed in name
}

// member function that retrieves the dog's name
const std::string &Dog::getName() const
{
    return m_name; // return m_name's value
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
