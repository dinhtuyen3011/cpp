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
    A abc; 
public: 
    B() { cout << "B's constructor called " << endl; } 
    A getA() { return abc; } 
}; 
  
int main() 
{     
    B b; 
    A a = b.getA();   
    return 0; 
}
/* Output */
//A's constructor called
//B's constructor called
