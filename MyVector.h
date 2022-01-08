#pragma once
#include <iostream>
template <class T>
class MyVector{
    private:
        T* arr;
        int startingCapacity = 20;
        int s;
    public:
        MyVector();
        int size();
        int capacity();
        bool empty();
        void push_back(T item);
        void pop_back(int n);
        void pop_back();
        void clear();
        T &operator[] (int i);

};
#include "MyVector.cxx"