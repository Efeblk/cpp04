#include   "Cat.hpp"

Cat::Cat()
{
    this->brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &c)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain();
    *this = c;
}

Cat &Cat::operator=(const Cat &c)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &c)
    {
        delete this->brain;
        this->brain = new Brain(*c.brain);
        this->type = c.type;
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}