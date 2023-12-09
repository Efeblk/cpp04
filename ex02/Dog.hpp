#include "AAnimal.hpp"

class Dog : public AAnimal
{ 
public:
    Dog();
    ~Dog();
    void makeSound() const;
};