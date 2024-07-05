// single inheritance
#include<iostream>

class Animal {

    public:

    void eat() {

        std::cout << "Animal is eating" << std::endl;

    }

};

class Dog : public Animal {

public:

    void bark() {

        std::cout << "Dog is barking" << std::endl;

    }

};

int main() {

    Dog dog;
    dog.eat();
    dog.bark();

    return 0;

}