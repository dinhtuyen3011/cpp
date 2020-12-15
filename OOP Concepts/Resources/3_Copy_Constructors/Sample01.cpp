#include<iostream>
using namespace std;

class Car {
public:
	//Constructor
	Car() { cout << "Car constructor\n"; }
	Car(int a) { cout << "Car constructor\n"; }
	//Copy constructor
	Car(Car& c)
	{
		cout << "Car Copy constructor\n";
	}
};

int main() {

	//Create an object of the Car
	Car oldCar; //also constructor call	
	
	//Create an object from existing object
	Car newCar = oldCar; // call copy constructor	

    cout<<"- New Car:"<<&newCar<<endl;
    cout<<"- Old Car:"<<&oldCar<<endl;

	return 0;
}
/* Output *//*
Car constructor     
Car constructor     
Car Copy constructor
<<<<<<< HEAD
- New Car:0x61ff0d
- Old Car:0x61ff0f
*/
// =======
// - New Car:0x6ffe1e
// - Old Car:0x6ffe1f
// */
// <<<<<<< HEAD
// =======
// <<<<<<< HEAD
// >>>>>>> dev03
// =======
// >>>>>>> dev04
// >>>>>>> master
