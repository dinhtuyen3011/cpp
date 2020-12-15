#include <iostream>
using namespace std;

int Exercise05()
{
    int i, n, sum = 0;
    cout << "\n\n Find the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n):\n";
    cout << "------------------------------------------------------------------------------------\n";
    cout << " Input the value for nth term: ";
    cin >> n;

    for (i = 1; i <= n; i++) 
	{
        sum += i * i;
        cout << i << "*" << i << " = " << i * i << endl;
    }
    cout << " The sum of the above series is: " << sum << endl;
}
/* Output *//*
Input the value for nth term: 5                                       
1*1 = 1                                                                
2*2 = 4                                                                
3*3 = 9                                                                
4*4 = 16                                                               
5*5 = 25                                                               
The sum of the above series is: 55
*/
