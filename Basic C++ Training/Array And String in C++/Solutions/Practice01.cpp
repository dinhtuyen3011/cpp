#include <iostream>
using namespace std;

int main() 
{
    int numbers[10], sum = 0;
    cout << "Enter 10 numbers: ";
    int size = sizeof(numbers)/sizeof(numbers[0]);
    //  Storing 5 number entered by user in an array
    //  Finding the sum of numbers entered
    for (int i = 0; i < size; ++i)
    {
        cin >> numbers[i];        
    }
    cout<<"- Elements:"<<endl;
    for (int i = 0; i < size; ++i)
    {
        cout<<numbers[i]<<" ";
    }          
    return 0;
}
/* Output */
/*Enter 10 numbers: 3 4 5 6 7 8 10 11 21 34
- Elements: 3 4 5 6 7 8 10 11 21 34 */
