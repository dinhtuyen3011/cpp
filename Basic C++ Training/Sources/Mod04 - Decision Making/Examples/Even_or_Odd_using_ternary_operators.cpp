/* Example 2: Check Whether Number is Even or Odd using ternary operators */
#include <iostream>
using namespace std;

int Sample104()
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;
    
    (n % 2 == 0) ? cout << n << " is even." :  cout << n << " is odd.";
    
    return 0;
}
