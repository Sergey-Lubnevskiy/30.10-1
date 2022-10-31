#pragma once
#include <iostream>
#include "subscriber.h"
#include <fstream>
using namespace std;

template<class T>
struct Element
{
    T data;
    Element<T>* next;
};

template<class T>
class scroll
{
    Element<T>* head;
    Element<T>* tail;
    int Count;

public:
    scroll();
    ~scroll();
    void Add(T data);
    void DelAll();
    void Del();
    void Print();
    void Save();
};

template<class T>
scroll<T>::scroll()
{
    head = tail = NULL;
    Count = 0;
};

template<class T>
scroll<T>::~scroll()
 {
    DelAll();
};

template<class T>
void scroll<T>::Add(T data)
{
    Element<T>* temp = new Element<T>;

    temp->data = data;
    temp->next = NULL;
    if (head != NULL) {
        tail->next = temp;
        tail = temp;
    }
    else {
        head = tail = temp;
    }
    Count++;
};

template<class T>
void scroll<T>::Del()
{
    Element<T>* temp = head;
    head = head->next;
    delete temp;
};

template<class T>
void scroll<T>::DelAll()
{
    while (head != 0)
        Del();
};

template<class T>
void scroll<T>::Print()
{
    for (auto temp = head; temp != 0; temp = temp->next)
    {
        temp->data.Print();
        cout << endl;
    }
};

template<class T>
void scroll<T>::Save()
{
    for (auto temp = head; temp != 0; temp = temp->next)
    {
        temp->data.Save();
    }
};