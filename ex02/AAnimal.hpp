#include <iostream>
#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include "Brain.hpp"

class AAnimal
{
protected:
    std::string type;
public:
    AAnimal();
    AAnimal(AAnimal const &copy);
    AAnimal &operator=(AAnimal const &copy);
    void settingType(std::string type);
    std::string getType() const;
    virtual void makeSound() const = 0;
    virtual ~AAnimal();
};

#endif