#include <iostream>
using namespace std;

class Cube2
{
    public:
    int side;
    int getVolume();
};

// member function defined outside class definition
int Cube2 :: getVolume()
{
    return side*side*side;
}

int main()
{
    Cube2 c;
    c.side = 4;    // setting side value

    //Calling Class Member Function in C++
    cout<< "Volume of cube C1 = "<< c.getVolume();
}
/* Output */
// Volume of cube C1 = 64
