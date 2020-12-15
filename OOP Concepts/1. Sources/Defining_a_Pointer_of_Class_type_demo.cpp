#include<iostream>
using namespace std;
class Simple
{
    public:
    int a = 10;
};

int main()
{
    Simple obj;
    Simple* ptr;   // Pointer of class type
    ptr = &obj;

    cout << "a = "<< obj.a <<endl;
    cout << "ptr = "<< ptr->a <<endl;  // Accessing member with pointer
}
/* Output *//*
a = 10
ptr = 10
*/
