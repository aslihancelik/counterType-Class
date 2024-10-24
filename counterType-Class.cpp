// counterType-Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This file tests the counterType class by creating a counter object and calling its functions.

#include "counterType.h"
#include <iostream>
using namespace std;

int main()
{
    // Testing default constructor (initializes counter to 0)
    counterType counter;
    cout << "Initial counter value (default constructor): ";
    counter.print();

    // Setting counter to 5
    counter.setCounter(5);
    cout << "Counter after setting it to 5: ";
    counter.print();

    // Increment the counter
    counter.incrementCounter();
    cout << "Counter after incrementing by 1: ";
    counter.print();

    // Decrement the counter
    counter.decrementCounter();
    cout << "Counter after decrementing by 1: ";
    counter.print();

    // Reset the counter
    counter.resetCounter();
    cout << "Counter after resetting: ";
    counter.print();

    // Decrement the counter
    cout << "Attempting to decrement the counter after it is reset: " << endl;
    counter.decrementCounter();
    cout << "The value of the counter after the attempt:";
    counter.print();

    // Setting counter to a negative value (should produce error)
    counter.setCounter(-3);

    // Testing parameterized constructor
    counterType counter2(10);
    cout << "Counter initialized to 10 (parameterized constructor): ";
    counter2.print();

    // Testing increment and decrement on counter2
    counter2.incrementCounter();
    cout << "Counter after incrementing by 1: ";
    counter2.print();

    counter2.decrementCounter();
    cout << "Counter after decrementing by 1: ";
    counter2.print();

    return 0;


}
