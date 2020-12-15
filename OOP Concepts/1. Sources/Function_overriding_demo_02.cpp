#include <iostream>
using namespace std;
class base {
    public:
    //this needs to be virtual to be overridden in derived class
    virtual void show(){ cout<<"I am base"; }
    //this is overloaded function
    void show(int x){ cout<<"\nI am overloaded"; }
};

class derived : public base {
    public:
    //the base version of this function is being overridden
    void show(){ cout<<"I am derived (overridden)"; }
};

int main(){
    base* b;
    //derived d;
    b=new derived;  //b = &d
    
    b->show();  //this will call the derived overriden version
    b->show(6); // this will call the base overloaded function
}
/* Output */
// I am derived (overridden)
// I am overloaded

