#include "Dog.hpp"

Dog::Dog()
{
    this->brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &d)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain(*d.brain);
    this->type = d.type;
}

Dog &Dog::operator=(const Dog &d)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &d)
    {
        delete this->brain;
        this->brain = new Brain(*d.brain);
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
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}