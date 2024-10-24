// counterType-Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "counterType.h"
#include <iostream>
using namespace std;

int main()
{
    counterType counter;

    counter.print();

    counter.setCounter(5);
    counter.print();
}
