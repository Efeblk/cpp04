#include "Animal.hpp"
#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{   
private:
    Brain *brain;
public:
    Cat();
    Cat(const Cat &c);
    Cat &operator=(const Cat &c);
    ~Cat();
    void makeSound() const;

};

#endif