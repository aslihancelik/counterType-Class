// This class implements a simple counter.
// The counter can be incremented, decremented, reset, or set to a specific value.

#pragma once
#include <iostream>
using namespace std;

class counterType
{
private:
	int counter;

public:

	// This class implements a simple counter.
    // The counter can be incremented, decremented, reset, or set to a specific value.
	counterType(int = 0);

	// Increments the counter by 1.
	void incrementCounter();

//decrement(decrement after reset)
// 
	// Decrements the counter by 1, but only if counter is greater than 0.
	void decrementCounter();


//reset operation
// 
	// Resets the counter to 0.
	void resetCounter();

	// Sets the counter to the specified value. Only non-negative values are allowed.

	void setCounter(int);

	// Returns the current value of the counter.
	int getCounter();


	// Prints the current value of the counter.

	void print();


};
