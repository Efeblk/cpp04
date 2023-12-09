#include <iostream>
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include "Brain.hpp"

class Animal
{
protected:
    std::string type;
    Brain *brain;
public:
    Animal();
    void settingType(std::string type);
    std::string getType() const;
    virtual void makeSound() const;
    virtual ~Animal();
};

#endif