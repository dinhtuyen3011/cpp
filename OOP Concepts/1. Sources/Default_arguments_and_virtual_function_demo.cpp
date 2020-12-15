#include <iostream> 
using namespace std; 
  
class Base 
{ 
public: 
    virtual void fun ( int x = 20 ) 
    { 
        cout << "Base::fun(), x = " << x << endl; 
    } 
}; 
  
class Derived : public Base 
{ 
public: 
    virtual void fun ( int x = 10) 
    { 
        cout << "Derived::fun(), x = " << x << endl; 
    } 
}; 
    
int main() 
{ 
    Derived d1; 
    Base *bp = new Derived; 
    //Base *bp = &d1; 
    bp->fun(); 
    
    return 0; 
} 
/* Output */
// Derived::fun(), x = 20
