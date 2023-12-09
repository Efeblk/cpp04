#include   "wrongCat.hpp"

wrongCat::wrongCat()
{
    std::cout << "wrongCat constructor called" << std::endl;
    this->type = "wrongCat";
}

void wrongCat::makeSound() const
{
    std::cout << "wrongcat Meow Meow" << std::endl;
}

wrongCat::~wrongCat()
{
    std::cout << "wrongCat destructor called" << std::endl;
}