/* Syntax:
class subclass_name : access_mode base_class1, access_mode base_class2, ....
{
  //body of subclass
}; */
// C++ program to explain  
// multiple inheritance 
#include <iostream> 
using namespace std; 
  
// first base class 
class Vehicle02 { 
  public: 
    Vehicle02() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
  
// second base class 
class FourWheeler02 { 
  public: 
    FourWheeler02() 
    { 
      cout << "This is a 4 wheeler Vehicle" << endl; 
    } 
}; 
  
// sub class derived from two base classes 
class Car02 : public Vehicle02, public FourWheeler02 { 
  
}; 
  
// main function 
int Multiple_Inheritance_demo() 
{    
    // creating object of sub class will 
    // invoke the constructor of base classes 
    Car02 obj; 
    
    return 0; 
}
/* Output *//*
This is a Vehicle
This is a 4 wheeler Vehicle
*/
