/* Write a C++ program to find maximum between three numbers using ladder if else or nested if. 
How to find maximum or minimum between three numbers using if else in C++ programming. 
Logic to find maximum or minimum between three numbers in C++ program.

Example
Input
Input num1: 10
Input num2: 20
Input num3: 15

Output
Maximum is: 20

Program to find maximum between three number using nested if
/**
 * C++ program to find maximum between three numbers using nested if
 */
#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3, max;

    /* Input three numbers from user */
    cout<<"Enter three numbers: ";
    cin>> num1>>num2>>num3;


    if((num1 > num2) && (num1 > num3))    
        /* If num1 is greater than both */
        max = num1;   
    else if((num2 > num1) && (num2 > num3))    
        /* If num2 is greater than both */
        max = num2;    
    else if((num3 > num1) && (num3 > num2))   
        /* If num3 is greater than both */
        max = num3;    

    /* Print maximum number */
    cout<<"Maximum among all three numbers = "<<max;	  
	return 0;
}