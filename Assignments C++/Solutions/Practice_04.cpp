/* C++ program to check whether a number is divisible by 5 and 11 or not
Write a C++ program to check whether a number is divisible by 5 and 11 
or not using if else. How to check divisibility of any number in C++ programming. 
C++ program to enter any number and check whether it is divisible by 5 and 11 or not. 
Logic to check divisibility of a number in C++ program.

Example
Input
Input number: 55

Output
Number is divisible by 5 and 11

Program to check divisibility of a number */

#include <iostream>
using namespace std;
int main() {
    int num;

    /* Input number from user */
    cout<<"Enter any number: ";
    cin>>num;

    /*
     * If  num modulo division 5 is 0 
     * and num modulo division 11 is 0 then
     * the number is divisible by 5 and 11 both
     */
    if((num % 5 == 0) && (num % 11 == 0))   
        printf("Number is divisible by 5 and 11");    
    else   
        printf("Number is not divisible by 5 and 11");
      
	return 0;
}