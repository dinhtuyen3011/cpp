/* Example 1: Check Whether Number is Even or Odd using if else */
#include <iostream>
using namespace std;

int Sample103()
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if ( n % 2 == 0)
        cout << n << " is even.";
    else
        cout << n << " is odd.";

    return 0;
}
/* Output */
// Enter an integer: 23
// 23 is odd.
