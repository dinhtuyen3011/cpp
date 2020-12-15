// A program with virtual destructor
#include<iostream>

using namespace std;

class base {
  public:
    base()
    { cout<<"Constructing base \n"; }
    virtual ~base()
    { cout<<"Destructing base \n"; }
    virtual void PrintInfo(){}
};

class derived: public base {
  public:
    derived()
    { cout<<"Constructing derived \n"; }
    ~derived()
    { cout<<"Destructing derived \n"; }
    void PrintInfo(){cout<<"This is Print Info function!"<<endl;}
};

int main(void)
{
  derived *d = new derived();
  base *b = d;
  b->PrintInfo();
  
  delete b;
  
  return 0;
}
/* Output *//*
Constructing base
Constructing derived
This is Print Info function!
Destructing derived
Destructing base
*/
