#include "Dog.hpp"
#include "Cat.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"

int main() {
    const int size = 10;
    Animal** animals = new Animal*[size];
    for (int i = 0; i < size / 2; i++) {
        animals[i] = new Dog();
    }
    for (int i = size / 2; i < size; i++) {
        animals[i] = new Cat();
    }
    for (int i = 0; i < size; i++) {
        delete animals[i];
    }
    delete[] animals;

    {
        const wrongAnimal* meta = new wrongCat();
        const wrongAnimal* i = new wrongCat();
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        meta->makeSound();
        delete i;
        delete meta;
    }

    return 0;
}