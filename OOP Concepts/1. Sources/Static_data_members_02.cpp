#include <iostream> 
using namespace std; 
  
class A 
{ 
    int x; 
public: 
    A() { cout << "A's constructor called " << endl;  } 
}; 
  
class B 
{ 
    static A abc; 
public: 
    B() { cout << "B's constructor called " << endl; } 
    static A getA() {return abc;} 
}; 
  
A B::abc;  //scope :: definition of abc 
  
int main() 
{ 
    // static member 'a' is accessed without any object of B    
    A a = B::getA();   
    return 0; 
}
/* Output */
//A's constructor called
