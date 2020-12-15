/*Write a program in C++ to display the first n terms of Fibonacci series.
Sample Output:
Input number of terms to display: 10
Here is the Fibonacci series upto to 10 terms:
0 1 1 2 3 5 8 13 21 34 */
#include <iostream>
using namespace std;
int main()
{
    int prv = 0, pre = 1, trm, i, n;
    cout << "\nDisplay the first n terms of Fibonacci series:\n";
    cout << "------------------------------------------------\n";
    cout << " Input number of terms to  display: ";
    cin >> n;
    cout << " Here is the Fibonacci series upto  to " << n << " terms: "<<endl;
    cout << prv << " " << pre;
    for (i = 3; i <= n; i++) 
    {
        trm = prv + pre;
        cout << " " << trm;
        prv = pre;
        pre = trm;
    }
    cout << endl;
}