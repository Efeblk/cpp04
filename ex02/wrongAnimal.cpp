#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal()
{
    std::cout << "wrongAnimal constructor called" << std::endl;
}

wrongAnimal::wrongAnimal(const wrongAnimal &a)
{
    std::cout << "wrongAnimal copy constructor called" << std::endl;
    *this = a;
}

wrongAnimal &wrongAnimal::operator=(const wrongAnimal &a)
{
    std::cout << "wrongAnimal assignation operator called" << std::endl;
    if (this != &a)
    {
        this->type = a.type;
    }
    return (*this);
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
    std::cout << "wrongAnimal destructor called" << std::endl;
}
