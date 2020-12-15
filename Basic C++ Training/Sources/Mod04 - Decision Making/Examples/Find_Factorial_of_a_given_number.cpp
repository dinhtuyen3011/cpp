/* Example: Find Factorial of a given number */
//- Doi voi bat ki so duong n nao, giai thua duoc dua ra boi:
//=> factorial = 1*2*3...*n
#include <iostream>
using namespace std;

int Sample114()
{
    unsigned int n;
    unsigned long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }

    cout << "Factorial of " << n << " = " << factorial;    
    return 0;
}
/* Output *//*
Enter a positive integer: 12
Factorial of 12 = 479001600
*/
