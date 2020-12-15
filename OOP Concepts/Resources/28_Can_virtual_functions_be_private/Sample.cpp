#include<iostream>
using namespace std;
class Derived;
class Base {
private:
    virtual void fun() { cout << "Base Fun"; }
    friend void PrintInfo();
};

class Derived: public Base {
public:
    void fun() { cout << "Derived Fun"; }
};

void PrintInfo(){
   Base *ptr = new Derived;
   ptr->fun();
}

int main()
{
   PrintInfo();
   return 0;
}
/* Output */
// Derived Fun