/*Write a program in C++ to display n terms of natural number and their sum.
Sample Output:
Input a number of terms: 7
The natural numbers upto 7th terms are:
1 2 3 4 5 6 7
The sum of the natural numbers is: 28*/
#include <iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout << "\nDisplay n terms of natural number and their sum:\n";
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