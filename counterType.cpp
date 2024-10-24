

#include "counterType.h"
#include <iostream>
using namespace std;

//default constructor
//counterType();
//parameterized constructor

counterType::counterType(int counterUser) {
	setCounter(counterUser);
}

//increment operation
void counterType::incrementCounter() {

	counter = counter++;

}

//decrement(decrement after reset)
// 
void counterType::decrementCounter() {

	counter = counter--;

}


//reset operation
// 

void counterType::resetCounter() {
	counter = 0;
}

//setting the counter object to a value 120??????????

void counterType::setCounter(int counterUser) {

	counter = counterUser;
}

//retrieve counters value
int getCounter() {
	return counter;
}