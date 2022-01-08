#include <iostream>
#include "MyVector.h"

template<class T>
MyVector<T>::MyVector()
{
    startingCapacity = 1;
    s = 0;
    arr = new T[startingCapacity];
}


template<class T>
int MyVector<T>::size()
{
    return s;
}

template<class T>
int MyVector<T>::capacity()
{
    return startingCapacity;
}

template<class T>
bool MyVector<T>::empty()
{
    if(s == 0)
    {
        std::cout.setf(std::ios::boolalpha);
        return true;
    }
    else
    {
        std::cout.setf(std::ios::boolalpha);
        return false;
    }
}

template<class T>
void MyVector<T>::push_back(T item)
{
    if(s >= startingCapacity){
        T* v = new T[startingCapacity *= 2];
        for(int i = 0; i < s; ++i) 
        {
            v[i] = arr[i];
        }
        delete[] arr;
        arr = nullptr;
        arr = v;
    }
    arr[s++] = item;
}

template<class T>
T &MyVector<T>::operator[](int i)
{
    return arr[i];
}

template<class T>
void MyVector<T>::pop_back()
{
    T *temp = new T[startingCapacity];
    for(int i = 0; i < s-1; i++)
    {
        temp[i] = arr[i];
    }
    s--;
    delete[] arr;
    arr = nullptr;
    arr=temp;
    //arr[size]=0;
   // s--;

}

template<class T>
void MyVector<T>::pop_back(int n)
{
    T *temp = new T[startingCapacity];
    for(int i = 0; i < s; i++)
    {
        if(i >= n)
        {
            temp[i] = arr[i+1];
        }
        else
            temp[i] = arr[i];
    }
    s--;
    delete[] arr;
    arr = nullptr;
    arr = temp;
}

template<class T>
void MyVector<T>::clear()
{
    s=0;
    delete[] arr;
    arr = nullptr;
}