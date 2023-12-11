#include <iostream>
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(Animal const &copy);
    Animal &operator=(Animal const &copy);
    void settingType(std::string type);
    std::string getType() const;
    virtual void makeSound() const;
    virtual ~Animal();
};

#endif