/* Write a C++ program to find maximum between two numbers using if else. 
C++ program to input two numbers from user and find maximum between two 
numbers using if else. How to find maximum or minimum between two numbers 
using if else in C++ programming.

Example
Input
Input num1: 10
Input num2: 20
Output
Maximum = 20
Program to find maximum using simple if
/**
 * C++ program to find maximum between two numbers
 */

#include <iostream>
using namespace std;
int main() {
    int num1, num2;

    /* Input two numbers from user */
    cout<<"Enter one numbers: ";
    cin>>num1;
    
    cout<<"Enter two numbers: ";
    cin>>num2;

    /* Compare num1 with num2 */
    if(num1 > num2)   
        /* True part means num1 > num2 */
        cout<<num1<<" is maximum";          
    else    
        /* False part means num1 < num2 */
        cout<<num2<<" is maximum";   
    return 0;
}