// C++ program for Hybrid Inheritance 
  
#include <iostream> 
using namespace std; 
  
// base class  
class Vehicle05  
{ 
  public: 
    Vehicle05() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
  
//base class 
class Fare05
{ 
    public: 
    Fare05() 
    { 
        cout<<"Fare of Vehicle\n"; 
    } 
}; 
  
// first sub class  
class Car05: public Vehicle05 
{ 
  
}; 
  
// second sub class 
class Bus05: public Vehicle05, public Fare05 
{ 
      
}; 
  
// main function 
int Hierarchical_Inheritance_demo() 
{    
    // creating object of sub class will 
    // invoke the constructor of base class 
    Bus05 obj2; 
    
    return 0; 
}
/* Output *//*
This is a Vehicle
Fare of Vehicle
*/
