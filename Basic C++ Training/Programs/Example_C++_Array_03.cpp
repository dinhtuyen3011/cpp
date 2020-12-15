/* Example 2: Passing Multidimensional Array to a Function
C++ Program to display the elements of two dimensional array by passing it to a function.*/
#include <iostream>
using namespace std;

void display(int n[3][2]);

int main()
{
    int num[3][2] = {
        {3, 4},
        {9, 5},
        {7, 1}

    };
    display(num);

    return 0;
}

void display(int n[3][2])
{
    cout << "Displaying Values: " << endl;
    for(int i = 0;  i < 3; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            cout << n[i][j] << " ";
        }
    }
}
/* Output *//*
Displaying Values: 
3 4 9 5 7 1 
*/
