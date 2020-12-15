<<<<<<< HEAD
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
    //private data member - A
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

=======

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
    //private data member - A
    static A abc;

public:
    B() { cout << "B's constructor called " << endl; }
    static A getA()
    {return abc;}
};

A B::abc;  //scope :: definition of abc

int main()
{
    // static member 'a' is accessed without any object of B
    A a = B::getA();
    return 0;

#include <iostream>
using namespace std;
class A
{
    int x;
public:
    A() { cout << "A's constructor called " << endl;  }
};


//A B::abc;  //scope :: definition of abc

int main()
{
    // static member 'a' is accessed without any object of B
    A a = B::getA();
    return 0;
>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304
}
/* Output */
//A's constructor called

//undefined reference to `B::abc'
