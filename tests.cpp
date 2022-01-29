#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define CHECK DOCTEST_CHECK
#include "doctest.h"
#include <iostream>
#include "MyVector.h"

TEST_CASE("t1")
{
    MyVector<int> t1; 
    t1.push_back(10);
    t1.push_back(20);
    t1.push_back(30);
    t1.push_back(40);
    t1.push_back(50);
    t1.push_back(60);
    CHECK(t1.size() == 6);
    CHECK(t1[1] == 20);
    t1.pop_back();
    CHECK(t1.size() == 5);
    CHECK(t1[6] == 0);
    t1.pop_back(2);
    CHECK(t1.size() == 4);
    CHECK(t1[2] == 40);
    t1.clear();
    CHECK(t1.size() == 0);
}

TEST_CASE("t2")
{
    MyVector<int> t2;
    CHECK(t2.empty() == true); 
    t2.push_back(100);
    t2.pop_back();
    CHECK(t2.empty() == true); 
    t2.push_back(1000000);
    t2.push_back(25);
    t2.push_back(6);
    CHECK(t2.size() == 3);
    t2.pop_back(1);
    CHECK(t2[1]== 6);
}

TEST_CASE("t3")
{
    MyVector<int>t3;
    t3.push_back(0);
    t3.push_back(1);
    t3.push_back(2);
    t3.push_back(3);
    t3.push_back(4);
    t3.push_back(5);
    t3.push_back(6);
    t3.push_back(7);
    t3.push_back(8);
    t3.push_back(9);
    t3.push_back(10);
    for(int i = 0; i <= 10; i++)
    {
        CHECK(t3[i] == i);
    }
    
}
