#include "Animal.hpp"
#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal
{ 
public:
    Dog();
    Dog(const Dog &d);
    Dog &operator=(const Dog &d);
    ~Dog();
    void makeSound() const;
};

#endif