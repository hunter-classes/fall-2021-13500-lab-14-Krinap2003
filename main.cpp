/*
Author: Krina Patel
Instructor: Proffesor Mike Zamansky
Assignment: Lab 14
*/
#include <iostream>
#include "MyVector.h"

int main()
{
    //Constructor
    MyVector<int> t1; 

    //empty funtion
    std::cout<<t1.empty()<<"\n"; //True

    //push_back function
    t1.push_back(10);
    t1.push_back(20);
    t1.push_back(30);
    t1.push_back(40);
    t1.push_back(50);
    t1.push_back(60);
    std::cout<<t1.empty()<<"\n"; //False

    //size function
    std::cout<<t1.size()<<"\n"; //6

    //[] operator function
    std::cout<<"{";
    for(int i = 0; i < t1.size(); i++)
    {
        std::cout<<t1[i]<<" ";
    }
    std::cout<<"} \n";

    //pop_back function
    t1.pop_back();
    std::cout<<t1.size()<<"\n"; //5
    std::cout<<"{";
    for(int i = 0; i < t1.size(); i++)
    {
        std::cout<<t1[i]<<" ";
    }
    std::cout<<"} \n";

    //pop_back(int i function)
    t1.pop_back(1);
    std::cout<<t1.size()<<"\n"; //4
    std::cout<<"{";
    for(int i = 0; i < t1.size(); i++)
    {
        std::cout<<t1[i]<<" ";
    }
    std::cout<<"} \n";
    std::cout<<t1[1]<<"\n"; //30

    //clear function
    t1.clear();
    std::cout<<t1.empty()<<"\n"; //true


    return 0;
}