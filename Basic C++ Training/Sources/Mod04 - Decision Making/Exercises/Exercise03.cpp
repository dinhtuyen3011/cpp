#include <iostream>
using namespace std;

int Exercise03()
{
    int n, i;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factors of " << n << " are: " << endl;  
    for(i = 1; i <= n; ++i)
    {
        if(n % i == 0)
            cout << i << endl;
    }

    return 0;
}
/* Output */
//- Enter a positive integer: 60
//- Factors of 60 are: 1 2 3 4 5 6 12 15 20 30 60

