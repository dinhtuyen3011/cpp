#include <iostream>
using namespace std;

// declaring the variable which is to
// be made extern an intial value can
// also be initialized to x
int x = 100;
void externStorageClass()
{

    cout << "Demonstrating extern class\n";

    // telling the compiler that the variable
    // z is an extern variable and has been
    // defined elsewhere (above the main
    // function)
    extern int x;  //x = 100
    //int x;  //auto x (local variables) and x = 0

    // printing the extern variables 'x'
    cout << "Value of the variable 'x'"
         << "declared, as extern: " << x << "\n";

    // value of extern variable x modified
    x = 2;

    // printing the modified values of
    // extern variables 'x'
    cout
        << "Modified value of the variable 'x'"
        << " declared as extern: \n"
        << x;
}

int main()
{
    // To demonstrate extern Storage Class
    externStorageClass();

    return 0;
}
/* Output */
//Demonstrating extern class
//Value of the variable 'x'declared, as extern: 100
//Modified value of the variable 'x' declared as extern:2

