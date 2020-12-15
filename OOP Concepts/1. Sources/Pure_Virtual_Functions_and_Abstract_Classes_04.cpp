/* 3) We can have pointers and references of abstract class type. */
#include<iostream> 
using namespace std; 
  
class Base 
{ 
public: 
    virtual void show() = 0; 
}; 
  
class Derived: public Base 
{ 
public: 
    void show() { cout << "In Derived \n"; } 
}; 
  
int main(void) 
{ 
    Base *bp = new Derived(); 
    bp->show(); 
    return 0; 
}
/* Output */
// In Derived 
