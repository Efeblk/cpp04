#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

AAnimal &AAnimal::operator=(AAnimal const &copy)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
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
    std::cout << "Animal destructor called" << std::endl;
}
