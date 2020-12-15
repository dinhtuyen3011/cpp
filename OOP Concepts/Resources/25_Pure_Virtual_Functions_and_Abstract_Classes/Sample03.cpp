/* 2) A class is abstract if it has at least one pure virtual function. */
// pure virtual functions make a class abstract
#include<iostream>
using namespace std;

class Test
{
   int x=56;
public:
    virtual void show() = 0;
    int getX() { return x; }
};

class Test1 : public Test
{
public:

    void show()
    {
        cout<<getX();
    }
};
int main()
{
    Test1 t;
    t.show();
    return 0;
}
/* Output *//*
Compiler Error: cannot declare variable 't' to be of abstract
 type 'Test' because the following virtual functions are pure
within 'Test': note:     virtual void Test::show()
*/
