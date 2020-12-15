/* 1) A pure virtual function is implemented by classes which are derived from a Abstract class.*/
<<<<<<< HEAD
#include<iostream> 
using namespace std; 
  
class Base 
{ 
   int x = 10; 
public: 
    virtual void fun() = 0; 
    int getX() { return x; } 
}; 
  
// This class inherits from Base and implements fun() 
class Derived: public Base 
{ 
    int y; 
public: 
    void fun() { cout << "fun() called"; } 
}; 
  
int main(void) 
{ 
    Derived d; 
    d.fun(); 
    return 0; 
} 
=======
#include<iostream>
using namespace std;

class Base
{
   int x;
public:
    virtual void fun() = 0;
    int getX() { return x; }
};

// This class inherits from Base and implements fun()
class Derived: public Base
{
    int y;
public:
    void fun() { cout << "fun() called"; }
};

int main(void)
{
    Base a;
    Derived d;
    d.fun();
    return 0;
}
>>>>>>> dev04
/* Output */
// fun() called
