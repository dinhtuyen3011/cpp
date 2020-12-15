// CPP program to illustrate
// calling virtual methods in
// constructor/destructor
#include<iostream>
using namespace std;
class dog
{
public:
    dog()
    {
        cout<< "Constructor called" <<endl;
        bark("dog");
    }
    ~dog(){
        bark("~dog");
    }
    virtual void bark(string name) {
        cout<< "Virtual method called - "<<name<<endl;
    }
    void seeCat() {
        bark("seeCat");
    }
};

class Yellowdog : public dog
{
public:
    Yellowdog() {
        cout<< "Derived class Constructor called" <<endl;
    }
    void bark(string name) {
        cout<< "Derived class Virtual method called" <<name<<endl;
    }
};

int main()
{
    Yellowdog d;
    dog *a;
    a=&d;
    a->seeCat();
    return 0;
}
/* Output *//*
Constructor called
Virtual method called - dog
Derived class Constructor called
Virtual method called - ~dog
*/
