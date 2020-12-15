#include <iostream>
using namespace std;

int Exercise04()
{
    int i, j, n, sum = 0, tsum;
    cout << "\n\n Find the sum of the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n):\n";
    cout << "------------------------------------------------------------------------------------------\n";
    cout << " Input the value for nth term: ";
    cin >> n;
    for (i = 1; i <= n; i++) 
	{
        tsum = 0;
        for (j = 1; j <= i; j++) 
		{
            sum += j;
            tsum += j;
            cout << j;
            if (j < i) 
			{
                cout << "+";
            }
        }
        cout << " = " << tsum << endl;
    }
    cout << " The sum of the above series is: " << sum << endl;
}
/* Output *//*
Input the value for nth term: 5                                       
1 = 1                                                                  
1+2 = 3                                                                
1+2+3 = 6                                                              
1+2+3+4 = 10                                                           
1+2+3+4+5 = 15                                                         
The sum of the above series is: 35
*/
