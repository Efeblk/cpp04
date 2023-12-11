#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->brain = new Brain();
    std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &a)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->brain = new Brain();
    *this = a;
}

AAnimal &AAnimal::operator=(const AAnimal &a)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &a)
    {
        this->type = a.type;
        *(this->brain) = *(a.brain);
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
    delete this->brain;
    std::cout << "Animal destructor called" << std::endl;
}
