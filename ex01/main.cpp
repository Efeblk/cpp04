#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int size = 10; // Define the size of the array
    Animal** animals = new Animal*[size]; // Create an array of Animal pointers

    // Fill the first half of the array with Dog objects
    for (int i = 0; i < size / 2; i++) {
        animals[i] = new Dog();
    }

    // Fill the second half of the array with Cat objects
    for (int i = size / 2; i < size; i++) {
        animals[i] = new Cat();
    }

    // At the end of the program, loop over the array and delete each Animal
    for (int i = 0; i < size; i++) {
        delete animals[i];
    }

    // Don't forget to delete the array itself
    delete[] animals;

    return 0;
}