/* C++ program to store and calculate the sum of 5 numbers entered by the user using arrays. */
#include <iostream>
using namespace std;

int main() 
{
    int numbers[5], sum = 0;
    cout << "Enter 5 numbers: ";
    
    //  Storing 5 number entered by user in an array
    //  Finding the sum of numbers entered
    for (int i = 0; i < 5; ++i) 
    {
        cin >> numbers[i];
        sum += numbers[i];
    }    
    cout << "Sum = " << sum << endl;      
    return 0;
}
/* Output *//*
Enter 5 numbers: 10
20
30
40
50
Sum = 150
*/
