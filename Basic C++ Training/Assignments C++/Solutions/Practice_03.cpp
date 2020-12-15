/* C++ program to check whether a number is positive, negative or zero
Write a C++ program to check positive, negative or zero using simple if or if else. 
C++ program to input any number from user and check whether the given number is positive, 
negative or zero. Logic to check negative, positive or zero in C++ programming.

Example
Input
Input number: 23

Output
23 is positive

Program to check positive, negative or zero using simple if
/**
 * C++ program to check positive negative or zero using simple if statement
 */
#include <iostream>
using namespace std;
int main() {
    int num;
    
    /* Input number from user */
    cout<<"Enter any number: ";
    cin>>num;
    
    if(num > 0)
       printf("Number is POSITIVE");    
    else if(num < 0)   
       printf("Number is NEGATIVE");  
    else    
      printf("Number is ZERO");     
	return 0;
}