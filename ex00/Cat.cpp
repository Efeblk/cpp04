#include   "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}