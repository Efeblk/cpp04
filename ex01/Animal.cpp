#include "Animal.hpp"

Animal::Animal()
{
    this->brain = new Brain();
    std::cout << "Animal constructor called" << std::endl;
}

void Animal::settingType(std::string type)
{
    this->type = type;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

Animal::~Animal()
{
    delete this->brain;
    std::cout << "Animal destructor called" << std::endl;
}
