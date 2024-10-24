#pragma once

#include <iostream>
using namespace std;

class counterType
{
private:
	int counter;

public:

	//default constructor
	//counterType();
//parameterized constructor
	counterType(int = 0);
//increment operation
	void incrementCounter();

//decrement(decrement after reset)
// 
	void decrementCounter();


//reset operation
// 

	void resetCounter();

//setting the counter object to a value 120??????????

	void setCounter(int);

//retrieve counters value
	int getCounter();


	//print counter value

	void print();


};
