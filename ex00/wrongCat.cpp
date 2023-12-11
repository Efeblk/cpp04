#include   "wrongCat.hpp"

wrongCat::wrongCat()
{
    std::cout << "wrongCat constructor called" << std::endl;
    this->type = "wrongCat";
}

wrongCat::wrongCat(const wrongCat &c)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = c;
}

wrongCat &wrongCat::operator=(const wrongCat &c)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &c)
    {
        this->type = c.type;
    }
    return (*this);
}
void wrongCat::makeSound() const
{
    std::cout << "wrongcat Meow Meow" << std::endl;
}

wrongCat::~wrongCat()
{
    std::cout << "wrongCat destructor called" << std::endl;
}