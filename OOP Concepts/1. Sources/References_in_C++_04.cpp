/* in c++ 98 'v1' must be initialized by constructor not by '{...}' *//*
 1) Go to Toolbar -> Settings -> Compiler
 2) In the "Selected compiler" drop-down menu, make sure "GNU GCC Compiler" is selected
 3) Below that, select the "compiler settings" tab and then the "compiler flags" tab underneath
 4) In the list below, make sure the box for "Have g++ follow the C++11 ISO C++ language standard [-std=c++11]" is checked
 5) Click OK to save
*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect{10,20,30,40};

    // We can modify elements if we
    // use reference
    for (int &x : vect)
        x = x + 5;

    // Printing elements
    for (int x : vect)
       cout << x << " ";

    return 0;
}
/* Output */
15 25 35 45

