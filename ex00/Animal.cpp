#include "Animal.hpp"

Animal::Animal()
{
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
    std::cout << "Animal destructor called" << std::endl;
}
