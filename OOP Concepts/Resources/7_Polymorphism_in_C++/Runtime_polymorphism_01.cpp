// C++ program for function overriding
#include <iostream>
using namespace std;
class base
{
	public:
    virtual void print ()
    { cout<< "print base class" <<endl; }

    void show ()
    { cout<< "show base class" <<endl; }
};

class derived01 : virtual public base
{
    public:    
    void print()
    { cout<< "Ha ha ha :D" <<endl; }

    void show ()
    { cout<< "show derived class" <<endl; }
};

class derived02 : public base
{
    public:  
    void print()
    { cout<< "Hi hi hi hi :D" <<endl; }

    void show ()
    { cout<< "show derived class" <<endl; }
};

class derived03 : public derived02
{
    public:   
    void print()
    { cout<< "He he he he :D" <<endl; }

    void show ()
    { cout<< "show derived class" <<endl; }
};

//main function
int main()
{
    base *bptr;

    int i ;
    cout<<"Input i = ";
    cin>>i;

    if(i==0)
    	bptr = new derived01;
    else if(i==1)
    	bptr = new derived02;
    else
        bptr = new derived03;

    //virtual function, binded at runtime (Runtime polymorphism)
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();

    derived03 d3;
    d3.print();

    return 0;
}
/* Output *//*
Input i = 1
Hi hi hi hi :D
show base class
He he he he :D
*/
