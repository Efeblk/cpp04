#include <iostream>
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include "Brain.hpp"

class wrongAnimal
{
protected:
    std::string type;
    Brain *brain;
public:
    wrongAnimal();
    void settingType(std::string type);
    std::string getType() const;
    void makeSound() const;
    virtual ~wrongAnimal();
};

#endif