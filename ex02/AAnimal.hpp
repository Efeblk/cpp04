#include <iostream>
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include "Brain.hpp"

class AAnimal
{
protected:
    std::string type;
    Brain *brain;
    AAnimal();
public:
    void settingType(std::string type);
    std::string getType() const;
    virtual void makeSound() const = 0;
    virtual ~AAnimal();
};

#endif