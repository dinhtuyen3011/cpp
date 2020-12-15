#include<iostream>
using namespace std;

class Car {
public:
	//Constructor
	Car() { cout << "Car constructor\n"; }

	//Copy constructor
	Car(const Car& c)
	{
		cout << "Car Copy constructor\n";
	}
};

int main() {

	//Create an object of the Car
	Car oldCar; //also constructor call
	
	//Create an object from existing object
	Car newCar = oldCar;// call copy constructor

	return 0;
}
/* Output *//*
Car constructor
Car Copy constructor
*/
