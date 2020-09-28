#pragma once
#include <iostream>
using namespace std;
#include "Node.h"
template <class T>
class List
{
    Node<T>* head = nullptr;
    Node<T>* tail = nullptr;
    int size = 0;
public:
    List();
    List(const List<T>& obj);
    List(List<T>&& obj)noexcept;
    ~List();
    void push_back(T val);
    void print()const;
    void pop_front();
    template<class T>
    friend ostream& operator<<(ostream& os, const List<T>& obj);
    T getLast()const;
};
template<class T>
List<T>::List(List<T>&& obj) noexcept
{
    head = obj.head;
    tail = obj.tail;
    size = obj.size;
    obj.head = nullptr;
    obj.tail = nullptr;
    obj.size = 0;
}

template<class T>
List<T>::List(const List<T>& obj)
{
    Node<T>* cur = obj.head;
    while (cur)
    {
        push_back(cur->getData());
        cur = cur->getNext();
    }
}
template<class T>
List<T>::~List()
{
    while (size != 0)
        pop_front();
}



template<class T>
void List<T>::pop_front()
{
    if (size == 0)
        return;
    if (size == 1)
    {
        delete head;
        size = 0;
        head = tail = nullptr;
        return;
    }
    Node<T>* tmp = head;
    head = head->getNext();
    delete tmp;
    size--;
}

template<class T>
inline T List<T>::getLast() const
{
    return tail->getData();
}

template<class T>
List<T>::List() = default;

template<class T>
void List<T>::push_back(T val)
{
    Node<T>* tmp = new Node<T>(val);
    if (size == 0)
    {
        head = tail = tmp;
    }
    else
    {
        tail->setNext(tmp);
        tail = tmp;
    }
    size++;
}

template<class T>
void List<T>::print() const
{
    Node<T>* cur = head;
    while (cur != nullptr)
    {
        cout << cur->getData() << endl;
        cur = cur->getNext();
    }
    cout << endl;
}

template<class T>
ostream& operator<<(ostream & os, const List<T> & obj)
{
    os << obj.getLast();
    return os;
}



