/* Example 2: Passing One-dimensional Array to a Function 
C++ Program to display marks of 5 students by passing one-dimensional array to a function.*/
#include <iostream>
using namespace std;

void display(int marks[5]);

int main()
{
    int marks[5] = {88, 76, 90, 61, 69};
    display(marks);
    return 0;
}

void display(int m[5])
{
    cout << "Displaying marks: "<< endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "Student "<< i + 1 <<": "<< m[i] << endl;
    }
}
/* Output *//*
Displaying marks: 
Student 1: 88
Student 2: 76
Student 3: 90
Student 4: 61
Student 5: 69
*/
