// C++ program to implement  
// Hierarchical Inheritance 
#include <iostream> 
using namespace std; 
  
// base class 
class Vehicle04  
{ 
  public: 
    Vehicle04() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
  
  
// first sub class  
class Car04: public Vehicle04 
{ 
  
}; 
  
// second sub class 
class Bus04: public Vehicle04 
{ 
      
}; 
  
// main function 
int Hierarchical_Inheritance_demo() 
{    
    // creating object of sub class will 
    // invoke the constructor of base class 
    Car04 obj1; 
    Bus04 obj2; 
    
    return 0; 
} 
/* Output *//*	
This is a Vehicle
This is a Vehicle
*/
