#include <iostream>
class Base
{
public:
    virtual ~Base()=0; // Pure virtual destructor
    virtual void PrintInfo(){}
};
Base::~Base()
{
<<<<<<< HEAD
    std::cout << "Pure virtual destructor is called"<<std::endl;
=======
   std::cout << "Pure virtual destructor is called"<<std::endl;
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
}

class Derived : public Base
{
public:
    ~Derived()
    {
<<<<<<< HEAD
        std::cout << "~Derived() is executed"<<std::endl;
    }
    // ~Derived()
    // {
    //     std::cout << "~Derived() is executed"<<std::endl;
    // }
=======
       std::cout << "~Derived() is executed"<<std::endl;
    }
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
    void PrintInfo(){std::cout<<":D"<<std::endl;}
};

int main()
{ 
    Base *b = new Derived();
    b->PrintInfo(); 
    delete b;
    return 0;
}
/* Output *//*
   :D
   ~Derived() is executed
   Pure virtual destructor is called
*/
