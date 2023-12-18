#include <iostream>
class Animal
{
public:
    void eat()
    {
        std::cout << "Animal is eating.\n";
    }
};
class Mammal : public Animal
{
public:
    void move()
    {
        std::cout << "Mammal is moving.\n";
    }
};
class Dog : public Mammal
{
public:
    void bark()
    {
        std::cout << "Dog is barking.\n";
    }
};
int main()
{
    Dog myDog;
    myDog.eat();
    myDog.move();
    myDog.bark();
    return 0;
}
