/* C++ program check whether a number is even or odd
Write a C++ program to check whether a number is even or odd using if else. 
How to check whether a number is even or odd using if else in C++ program. 
C++ Program to input a number from user and check whether the given number is 
even or odd. Logic to check even and odd number using if...else in C++ programming.

Example
Input
Input number: 10

Output
10 is even number

Program to check even or odd
/**
 * C++ program to check even or odd number
 */
#include <iostream>
using namespace std;
int main() {
    int num;

    /* Input number from user */
    cout<<"Enter any number to check even or odd: ";
    cin>>num;
    
    /* Check if the number is divisible by 2 then it is even */
    if(num % 2 == 0)    
        /* num % 2 is 0 */
        cout<<"Number is Even.";   
    else    
        /* num % 2 is 1 */
        cout<<"Number is Odd.";    
      
	return 0;
}