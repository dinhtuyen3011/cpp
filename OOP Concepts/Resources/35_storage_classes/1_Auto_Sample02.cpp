// C++ program to demonstrate working of auto
// and type inference
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    auto x = 4;
    auto y = 3.37;

    auto ptr = new char ('a');
    cout << typeid(x).name() << endl
         << typeid(y).name() << endl
         << typeid(ptr).name() << endl;
    return 0;
}
/* Output
i
d
Pi
*/
