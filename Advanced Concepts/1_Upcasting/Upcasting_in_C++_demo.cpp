#include <iostream>
using namespace std;
class Super
{
    int x;
    public:
    virtual void funBase(){}
};

class Sub:public Super
{
    int y;
    public:
    void funBase()
    {
        cout << "Sub function";
    }
};

int main()
{
    Super* ptr;
    Sub obj;
    ptr = &obj;
    ptr->funBase();
}
/* Output */
// Sub function
