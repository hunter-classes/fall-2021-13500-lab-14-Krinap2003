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