#pragma once
#include "llist.h"
#include <vector>
#include <string>

template <class T>
class LListNode
{
public:
    T data;
    LListNode<T> *next;

    LListNode<T>(T newData = T(), LListNode<T> *newNext = nullptr)
    {
        data = newData;
        next = newNext;
    }

    // friend class LList<T>;
};