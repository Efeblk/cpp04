#include   "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &c)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = c;
}

Cat &Cat::operator=(const Cat &c)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &c)
    {
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
    std::cout << "Cat destructor called" << std::endl;
}