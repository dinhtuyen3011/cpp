/* C++ program to check Leap Year
Write a C++ program to check leap year using if else. 
How to check whether a given year is leap year or not in C++ programming. 
C++ Program to input year from user and check whether the given year is leap year 
or not using ladder if else. Logic to check leap year in C++ programming.

Example
Input
Input year: 2004

Output
2004 is leap year.

Program to check leap year
/**
 * C++ program to check Leap Year
 */
#include <iostream>
using namespace std;
int main() {
    int year;

    /* Input year from user */
    cout<<"Enter year : ";
    cin>>year;


    /*
     * If year is exactly divisible by 4  and year is not divisible by 100
     * or year is exactly divisible by 400 then
     * the year is leap year.
     * Else year is normal year
     */
    if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))   
        cout<<"LEAP YEAR";    
    else   
        cout<<"COMMON YEAR";      
      
    return 0;
}
