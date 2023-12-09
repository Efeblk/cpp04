#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->brain = new Brain();
    std::cout << "Animal constructor called" << std::endl;
}

void AAnimal::settingType(std::string type)
{
    this->type = type;
}

std::string AAnimal::getType() const
{
    return (this->type);
}

void AAnimal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

AAnimal::~AAnimal()
{
    delete this->brain;
    std::cout << "Animal destructor called" << std::endl;
}
