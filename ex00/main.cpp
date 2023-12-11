#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"
int main()
{
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    const Dog dog = Dog();

    std::cout << dog.getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;

    std::cout << "---------------------" << std::endl;
    std::cout << "WRONG ONES" << std::endl;
    wrongAnimal* wrongMeta = new wrongAnimal();
    wrongAnimal* wrongI = new wrongCat();
    wrongMeta->makeSound();
    wrongI->makeSound();
    std::cout << "---------------------" << std::endl;
    return 0;
}