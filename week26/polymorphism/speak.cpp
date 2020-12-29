#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Base: Animal Speaking!" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Dog: Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Cat: Meow!" << endl;
    }
};

class FarmAnimal : public Animal
{
public:
    void speak(Animal *animal)
    {
        animal->speak();
    }
};

int main()
{
    Dog dog = Dog();
    Cat cat = Cat();
    FarmAnimal farm_animal;

    dog.speak();
    cat.speak();

    farm_animal.speak(&dog);
    farm_animal.speak(&cat);

    return 0;
}