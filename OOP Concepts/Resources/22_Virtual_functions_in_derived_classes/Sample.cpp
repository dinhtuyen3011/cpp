<<<<<<< HEAD
#include<iostream>   
using namespace std;  
class A { 
  public: 
<<<<<<< HEAD
<<<<<<< HEAD
    void fun() 
    { cout<<"\n A::fun() called ";} 
=======
    virtual void fun(int a = 10) 
    { cout<<"\n A::fun() called "<<a;} 
>>>>>>> 0239173d06b6362f7178107c33b52e9a5803f527
=======
     void fun(int a = 10) 
    { cout<<"\n A::fun() called "<<a;} 
>>>>>>> master
}; 
  
class B: public A { 
  public:  
<<<<<<< HEAD
    void fun(int a = 5)  
=======
    virtual void fun(int a = 5)  
>>>>>>> master
    { cout<<"\n B::fun() called "<<a; }       
}; 
  
class C: public B { 
  public: 
<<<<<<< HEAD
<<<<<<< HEAD
    void fun() 
    { cout<<"\n C::fun() called "; }       
=======
    void fun(int a = 20) 
    { cout<<"\n C::fun() called "<<a; }       
>>>>>>> 0239173d06b6362f7178107c33b52e9a5803f527
=======
    void fun(int a = 20) 
    { cout<<"\n C::fun() called "<<a; }       
>>>>>>> master
}; 
  
int main() 
{ 
   C c; // An object of class C 
   A *a = &c; // A pointer of type B* pointing to c 
   a->fun();  // this line prints "C::fun() called" 
<<<<<<< HEAD
   B b1;
   b1.fun();
=======
   
   C c1;
B *b1=&c1;
   b1->fun();
>>>>>>> master
   
   return 0; 
} 
/* Output */
// C::fun() called
=======
#include<iostream>
using namespace std;
class A {
  public:
    virtual void fun()
    { cout<<"\n A::fun() called ";}
};

class B: public A {
  public:
    void fun()
    { cout<<"\n B::fun() called "; }
};

class C: public B {
  public:
    void fun()
    { cout<<"\n C::fun() called "; }
};

int main()
{
    C s;
    s.fun();
  return 0;
}
<<<<<<< HEAD
>>>>>>> dev04
=======
>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304
>>>>>>> master
