#include <iostream>
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include "Brain.hpp"

class wrongAnimal
{
protected:
    std::string type;
public:
    wrongAnimal();
    wrongAnimal(const wrongAnimal &a);
    wrongAnimal &operator=(const wrongAnimal &a);
    void settingType(std::string type);
    std::string getType() const;
    void makeSound() const;
    virtual ~wrongAnimal();
};

#endif