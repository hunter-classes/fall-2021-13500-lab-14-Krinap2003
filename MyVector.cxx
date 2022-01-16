#include <iostream>
#include "MyVector.h"

//Constructor method
template<class T>
MyVector<T>::MyVector()
{
    startingCapacity = 1;
    s = 0;
    arr = new T[startingCapacity];
}

//Returns the size of the vector
template<class T>
int MyVector<T>::size()
{
    return s;
}

//Return the capacity
template<class T>
int MyVector<T>::capacity()
{
    return startingCapacity;
}

//return true if the vector is empty and false otherwise
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

//make the last element in the vector the last element passed in as the 
//parameter and increases the size of the vector
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

//return the element at index i in the vector 
template<class T>
T &MyVector<T>::operator[](int i)
{
    return arr[i];
}

//delets the last element in the vector and reduces the size by 1
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

//delets the element at index n in the vector and reduces the size by 1
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

//delets all the elements in the vector
template<class T>
void MyVector<T>::clear()
{
    s=0;
    delete[] arr;
    arr = nullptr;
}