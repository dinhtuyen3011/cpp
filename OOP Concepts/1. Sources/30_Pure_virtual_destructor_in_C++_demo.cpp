#include <iostream>
class Base
{
public:
    virtual ~Base()=0; // Pure virtual destructor
};
Base::~Base()
{
    std::cout << "Pure virtual destructor is called"<<std::endl;
}

class Derived : public Base
{
public:
    ~Derived()
    {
        std::cout << "~Derived() is executed"<<std::endl;
    }
    void PrintInfo(){std::cout<<":D"<<std::endl;}
};

int main()
{
    Derived d;
    d.PrintInfo();
    Base *b = new Derived();
    //b->PrintInfo();   //Error
    delete b;
    return 0;
}
/* Output *//*
:D
~Derived() is executed
Pure virtual destructor is called
~Derived() is executed
Pure virtual destructor is called
*/

