#include <iostream>
using namespace std;
int x;                // Global variable declared
int main14()
{
    x=10;                 // Initialized once
    cout <<"first value of x = "<< x <<endl;
    x=20;                 // Initialized again
    cout <<"Initialized again with value = "<< x<<endl;
}
/* Output */
// first value of x = 10
// Initialized again with value = 20
