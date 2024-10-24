// This file contains the implementation of the counterType class functions.

#include "counterType.h"
#include <iostream>
using namespace std;


//The counter is initalized to 0 or to a non-negatoive integer provided by the client
//Precondition: The counterUser parameter should be a non - negative integer.
//Postcondition : If counterUser is non - negative, the counter is initialized to the provided value.Otherwise, it defaults to 0 (via setCounter).
counterType::counterType(int counterUser) {
	setCounter(counterUser);
}

//increment operation
//Precondition: The counter must be initialized(to 0 or a non - negative value).
//Postcondition : The counter is incremented by 1.

void counterType::incrementCounter() {

	counter++;

}

//decrement(decrement after reset)

//Precondition: The counter must be initialized and non - negative.
//Postcondition : If the counter is greater than 0, it is decremented by 1. If the counter is 0 or negative, an error message is displayed.

void counterType::decrementCounter() {
	if (counter > 0){

		counter--;
	}
	else {
		cout << "Counter can't be decremented. Counter must be greater than equal to zero." << endl;
	}

}


//reset operation
// 

//Postcondition: The counter value is reset to 0

//Precondition: None.
//Postcondition : The counter is reset to 0.
void counterType::resetCounter() {
	counter = 0;
}

//setting the counter object to a value provided by user
//Precondition: value provided by user
//Postcondition: if non-negative user value then set the counter.
//                 if not nonnegative print an error statement 

//Precondition: The counterUser parameter should be an integer.
//Postcondition : If counterUser is non - negative, the counter is set to the provided value.Otherwise, an error message is displayed, and the counter remains unchanged.


void counterType::setCounter(int counterUser) {

	if (counterUser >= 0) {
		counter = counterUser;
	}
	else {
		cout << "Counter can only be set to non-negative values." << endl;
	}
	
}

//retrieve counters value
//Precondition: The counter must be initialized.
//Postcondition : The current value of the counter is returned.
int counterType::getCounter() {
	return counter;
}

//print counter
//Precondition: The counter must be initialized.
//Postcondition : The current value of the counter is printed.
void counterType::print() {
	cout << counter << endl;
}