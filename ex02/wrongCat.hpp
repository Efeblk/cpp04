#include "wrongAnimal.hpp"
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class wrongCat : public wrongAnimal
{  
private:
    Brain *brain;
public:
    wrongCat();
    wrongCat(const wrongCat &c);
    wrongCat &operator=(const wrongCat &c);
    ~wrongCat();
    void makeSound() const;
};

#endif