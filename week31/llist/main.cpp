#include <iostream>
#include "person.h"
#include "llist.h"

int main(int argc, char const *argv[])
{
    Person john = Person("John", 27);
    Person suzzy = Person("Suzzy", 31);
    Person mac = Person("Mac", 14);
    Person cool = Person("Cool", 89);

    // LListNode<Person> node;
    LList<LListNode<Person>> list;

    LListNode<Person> johnNode = LListNode<Person>(john);
    LListNode<Person> suzzyNode = LListNode<Person>(suzzy);
    LListNode<Person> macNode = LListNode<Person>(mac);
    LListNode<Person> coolNode = LListNode<Person>(cool);

    list.append(johnNode);
    list.append(suzzyNode);
    list.append(macNode);
    list.append(coolNode);

    LListNode<Person> *ptrJeff = nullptr;
    // list.append(ptrJeff, "Jeff", "Harold", "supercool@something.com");

    LListNode<Person> awesome = LListNode<Person>(Person("Awesome", 20));
    list.append(awesome);

    cout << list.size() << endl;

    // for (int i = 0; i < list.size(); i++)
    // {
    //     list.printIndex(i);
    // }

    // list.printIndex(2);
    list.printFirst();
    list.printLast();

    return 0;
}
