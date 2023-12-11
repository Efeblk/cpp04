#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "wrongCat.hpp"

int main( void )
{
    // const AAnimal d;
    
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;
    delete i;

    //AAnimal wrongAnimal = AAnimal();
    const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}