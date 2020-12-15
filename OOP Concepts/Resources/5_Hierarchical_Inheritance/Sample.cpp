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
    ~Vehicle04(){
      cout<<"Destroy"<<endl;
    }
}; 
    
// first sub class  
class Car04: public Vehicle04 
{ 
  public:
  Car04(){cout<<"This is the car"<<endl;
}
  ~Car04(){
    cout<<"Destroy car"<<endl;
  }
};
// second sub class 
class Bus04: public Vehicle04 
{
  public:
  Bus04(){cout<<"This is the bus"<<endl;}     
  ~Bus04(){
    cout<<"Destroy bus"<<endl;
  }
}; 
  
// main function 
int main() 
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