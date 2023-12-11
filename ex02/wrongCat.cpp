#include   "wrongCat.hpp"

wrongCat::wrongCat()
{
    this->brain = new Brain();
    std::cout << "wrongCat constructor called" << std::endl;
    this->type = "wrongCat";
}

wrongCat::wrongCat(const wrongCat &c)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain();
    *this = c;
}

wrongCat &wrongCat::operator=(const wrongCat &c)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &c)
    {
        this->type = c.type;
        *(this->brain) = *(c.brain);
    }
    return (*this);
}

void wrongCat::makeSound() const
{
    std::cout << "wrongcat Meow Meow" << std::endl;
}

wrongCat::~wrongCat()
{
    delete this->brain;
    std::cout << "wrongCat destructor called" << std::endl;
}