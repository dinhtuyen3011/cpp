#include <iostream>
using namespace std;

// defining the global variable
int a=10;

int main()
{
    //local variable
    int a=15;
    cout<<"local a: "<<a<<" Global a: "<<::a;
    
    // Re-defining global variable by using ::
    a=20;
    cout<<"\nlocal a: "<<a<<" Global a: "<<::a;
    return 0;
}
/* Output */
local a: 15 Global a: 10
local a: 15 Global a: 20
