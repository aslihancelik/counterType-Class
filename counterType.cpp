

#include "counterType.h"
#include <iostream>
using namespace std;

//default constructor
//counterType();
//parameterized constructor

//The counter is initalized to 0 or to a non-negatoive integer provided by the client
counterType::counterType(int counterUser) {
	setCounter(counterUser);
}

//increment operation
void counterType::incrementCounter() {

	counter = counter++;

}

//decrement(decrement after reset)
// 
//Post condition decrement or display error
void counterType::decrementCounter() {
	if (counter > 0){

		counter = counter--;
	}
	else {
		cout << "Counter can't be decremented. Counter must be greater than equal to zero.";
	}

}


//reset operation
// 

//Postcondition: The counter value is reset to 0
void counterType::resetCounter() {
	counter = 0;
}

//setting the counter object to a value provided by user
//Precondition: value provided by user
//Postcondition: if non-negative user value then set the counter.
//                 if not nonnegative print an error statement 

void counterType::setCounter(int counterUser) {

	if (counterUser >= 0) {
		counter = counterUser;
	}
	else {
		cout << "Counter can only be set to non-negative values.";
	}
	
}

//retrieve counters value
int counterType::getCounter() {
	return counter;
}

//print counter
void counterType::print() {
	cout << counter << endl;
}