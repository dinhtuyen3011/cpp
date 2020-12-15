/*Write a program in C++ to find the number and sum of all integer between 100 and 200 which are divisible by 9.
Sample Output:
Numbers between 100 and 200, divisible by 9:
108 117 126 135 144 153 162 171 180 189 198
The sum : 1683 */
#include <iostream>
using namespace std;
int main()
{
    int i, sum = 0;
    cout << "\n\n Find the number and sum of all integer between 100 and 200, divisible by 9:\n";
    cout << "--------------------------------------------------------------------------------\n";
    cout << " Numbers between 100 and 200, divisible by 9: " << endl;
    for (i = 101; i < 200; i++) 
    {
        if (i % 9 == 0) 
        {
            cout << " " << i;
            sum += i;
        }
    }
    cout << "\n The sum : " << sum << endl;
}