#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &d)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = d;
}

Dog &Dog::operator=(const Dog &d)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &d)
    {
        this->type = d.type;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}