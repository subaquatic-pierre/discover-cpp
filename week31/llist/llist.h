#pragma once
#include <iostream>
#include "node.h"

template <class T>
class LList
{
private:
    T *head;
    LListNode<T> *recursiveCopy(LListNode<T> *rhs);

public:
    LList<T>() : head(nullptr){};
    LList<T>(const LList<T> &rhs) : head(nullptr) { *this = rhs; }
    LList<T> &operator=(const LList<T> &rhs);
    ~LList<T>() { clear(); }
    void addToHead(T newData);
    T removeFromHead();

    bool isEmpty() const { return head == nullptr; }
    void clear(){};
    void append(T &node);
    void append(T *node, string firstName, string lastName, string email);

    void insertAtPoint(LListNode<T> *ptr, T newData);

    int size() const;
    void printFirst();
    void printLast();
    void printIndex(int index);
};

template <class T>
void LList<T>::append(T &node)
{
    if (head == nullptr)
    {
        head = &node;
    }
    else
    {
        T *curr = head;
        while (curr->next)
        {
            T tmp = T();
            curr = curr->next;
        }
        curr->next = &node;
    }
};

template <class T>
void LList<T>::append(T *node, string firstName, string lastName, string email)
{
    T *newNode;
    node = newNode;
    node->data.firstName = firstName;
    node->data.lastName = lastName;
    node->data.email = email;

    if (head == nullptr)
    {
        head = node;
    }
    else
    {
        T *curr = head;
        while (curr->next)
        {
            T tmp = T();
            curr = curr->next;
        }
        curr->next = node;
    }
};

template <class T>
void LList<T>::printIndex(int index)
{
    int tmpIndex = 0;
    bool found = false;
    T *curr = head;
    if (tmpIndex == index)
    {
        head->data.print();
    }
    else
    {
        while (curr->next)
        {
            tmpIndex++;
            if (tmpIndex == index)
            {
                curr->data.print();
                found = true;
            }
            curr = curr->next;
        }
        if (!found)
        {
            cout << "The index you requested doesn't exist" << endl;
        }
    }
}

template <class T>
void LList<T>::printFirst()
{
    head->data.print();
}

template <class T>
void LList<T>::printLast()
{
    T *curr = head;
    while (curr->next)
    {
        T tmp = T();
        curr = curr->next;
    }
    curr->data.print();
}

template <class T>
int LList<T>::size() const
{
    int size = 1;
    T *curr = head;
    while (curr->next)
    {
        size++;
        curr = curr->next;
    }
    return size;
}
