/*Write a program in C++ to display the n terms of even natural number and their sum.
Sample Output:
Input number of terms: 5
The even numbers are: 2 4 6 8 10
The Sum of even Natural Numbers upto 5 terms: 30 */
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;

    cout << "\n\n Display n terms of even natural number and their sum:\n";
    cout << "---------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;
    cout << "\n The even numbers are: ";
    for (i = 1; i <= n; i++) 
    {
        cout << 2 * i << " ";
        sum += 2 * i ;
    }
    cout << "\n The Sum of even Natural Numbers upto " << n << " terms: " << sum << endl;
}