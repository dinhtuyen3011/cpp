/* Write a program in C++ to display n terms of natural number and their sum */
#include <iostream>
using namespace std;
int Sample121()
{
    int n,i,sum=0;
    cout << "\n\n Display n terms of natural number and their sum:\n";
    cout << "---------------------------------------\n";
	cout << " Input a number of terms: ";
	cin>> n;		
    cout << " The natural numbers upto "<<n<<"th terms are: \n";
    for (i = 1; i <= n; i++) 
    {
        cout << i << " ";
		sum=sum+i;
    }
     cout << "\n The sum of the natural numbers is: "<<sum << endl;
}
/* Output *//*
Display n terms of natural number and their sum:                      
---------------------------------------                                
Input a number of terms: 7                                            
The natural numbers upto 7th terms are:                               
1 2 3 4 5 6 7                                                          
The sum of the natural numbers is: 28
*/
