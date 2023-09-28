// AnimalsTest.cpp
// Create and do test manipulations of our Animal objects

// Standard Library Headers
#include <iostream>
#include <string>
#include <vector>

// Local Project Headers
#include "Dog.h"
#include "Cat.h"
#include "Animal.h"

void testCat()
{
    std::cout << "\n"
              << "----- Begin Testing: Cat class -----"
              << "\n";

    // Create a Cat object
    Cat myCat{"Henry"};

    // Test initial name
    std::cout << "\n"
              << "Expected Value: Initial Cat Name: Henry"
              << "\n";
    std::cout << "  Actual Value: Initial Cat Name: " << myCat.getName() << "\n\n";

    // Test speaking
    std::cout << "\n"
              << "Expected Result: Henry says: Meow"
              << "\n";
    std::cout << "  Actual Result: ";
    myCat.speak();
    std::cout << "\n";

    // Test retching
    std::cout << "\n"
              << "Expected Result: Henry is retching you a wet ball of fur"
              << "\n";
    std::cout << "  Actual Result: ";
    myCat.retch();
    std::cout << "\n";

    // Test changing the cat's name
    myCat.setName("Doofus");

    // Test speaking
    std::cout << "\n"
              << "Expected Result: Doofus says: Meow"
              << "\n";
    std::cout << "  Actual Result: ";
    myCat.speak();
    std::cout << "\n";

    // Test retching
    std::cout << "\n"
              << "Expected Result: Doofus is retching you a wet ball of fur"
              << "\n";
    std::cout << "  Actual Result: ";
    myCat.retch();
    std::cout << "\n";

    std::cout << "----- End Testing: Cat class -----"
              << "\n\n";
}

void testDog()
{
    std::cout << "\n"
              << "----- Begin Testing: Dog class -----"
              << "\n";

    // Create an object to represent my dog
    Dog myDog("Charlie");

    // Test initial name
    std::cout << "\n"
              << "Expected Value: Initial Dog Name: Charlie"
              << "\n";
    std::cout << "  Actual Value: Initial Dog Name: " << myDog.getName() << "\n";
    std::cout << "\n";

    // Test speaking
    std::cout << "\n"
              << "Expected Result: Charlie says: Bark"
              << "\n";
    std::cout << "  Actual Result: ";
    myDog.speak();
    std::cout << "\n";

    // Test fetching
    std::cout << "\n"
              << "Expected Result: Charlie is fetching you a wet, chewed-up stick"
              << "\n";
    std::cout << "  Actual Result: ";
    myDog.fetch();
    std::cout << "\n";

    // Test changing the dog's name
    myDog.setName("Devil Dog, the Hound of the Baskervilles");

    // Test speaking
    std::cout << "\n"
              << "Expected Result: Devil Dog, the Hound of the Baskervilles says: Bark"
              << "\n";
    std::cout << "  Actual Result: ";
    myDog.speak();
    std::cout << "\n";

    // Test fetching
    std::cout << "\n"
              << "Expected Result: Devil Dog, the Hound of the Baskervilles is fetching you a wet, chewed-up stick"
              << "\n";
    std::cout << "  Actual Result: ";
    myDog.fetch();
    std::cout << "\n";

    std::cout << "----- End Testing: Dog class -----"
              << "\n\n";
}

void testAnimalVector(std::vector<Animal *> animals)
{
    // iterate through animals and call speak() on each
    for (int i = 0; i < animals.size(); ++i)
    {
        animals[i]->speak();
    }
}

int main()
{
    // initialize animals vector
    std::vector<Animal *> animals;

    // add some animals to the vector
    animals.push_back(new Cat("Henry"));
    animals.push_back(new Dog("Spot"));
    animals.push_back(new Cat("Fluffy"));
    animals.push_back(new Dog("Rover"));
    animals.push_back(new Cat("Kitty"));

    // test the animals
    testAnimalVector(animals);
}
