#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}


void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}