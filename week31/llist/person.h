#include <string>
#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    string firstName;
    string lastName;
    string email;
    Person() : name("No Name"), age(0){};
    Person(string name, int age) : name(name), age(age){};

    string getName() { return name; }
    int getAge() { return age; }

    void const setName(string newName) { name = newName; }
    void const setAge(int newAge) { age = newAge; }

    void print();
};

void Person::print()
{
    {
        cout << "The person's name is: " << name << ", they are " << age << " years old" << endl;
    }
}