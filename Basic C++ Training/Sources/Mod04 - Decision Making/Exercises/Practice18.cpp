/*Write a program in C++ to display the pattern like right angle triangle with number.
Sample Output:
Input number of rows: 5
11
12
123
1234
12345 */
#include <iostream>
using namespace std;
int main()
{
   int i,j,rows;
    cout << "\nDisplay the pattern using number starting from 1:\n";
    cout << "---------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   cout<<j;
	cout<<endl;
   }	
}

