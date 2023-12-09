#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal()
{
    this->brain = new Brain();
    std::cout << "wrongAnimal constructor called" << std::endl;
}

void wrongAnimal::settingType(std::string type)
{
    this->type = type;
}

std::string wrongAnimal::getType() const
{
    return (this->type);
}

void wrongAnimal::makeSound() const
{
    std::cout << "wrongAnimal sound" << std::endl;
}

wrongAnimal::~wrongAnimal()
{
    delete this->brain;
    std::cout << "wrongAnimal destructor called" << std::endl;
}
