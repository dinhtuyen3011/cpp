/* A simple and complete C++ program to demonstrate friend function of another class */
#include <iostream>
class B;  //forward declaration
class A {
public:
    void showB(B& x);
};

class B {
private:
    int b;
public:
    B():b(10){}
    friend void A::showB(B& x); // Friend function
};

void A::showB(B& x)
{
    // Since showB() is friend of B, it can
    // access private data members of B
    std::cout << "B::b = " << x.b;
}

int main()
{
    A a;
    B x;
    a.showB(x);
    return 0;
}
/* Output */
// B::b = 10
