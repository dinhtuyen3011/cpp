/* Write a program in C++ to find the sum of first 10 natural numbers */
#include <iostream>
using namespace std;
int Sample120()
{
    int i,sum=0;
    cout << "\n\n Find the first 10 natural numbers:\n";
    cout << "---------------------------------------\n";
    cout << " The natural numbers are: \n";
    for (i = 1; i <= 10; i++) 
    {
        cout << i << " ";
		sum=sum+i;
    }
     cout << "\n The sum of first 10 natural numbers: "<<sum << endl;
}
/* Output *//*
Find the first 10 natural numbers:                                    
---------------------------------------                                
The natural numbers are:                                              
1 2 3 4 5 6 7 8 9 10                                                   
The sum of first 10 natural numbers: 55
*/
