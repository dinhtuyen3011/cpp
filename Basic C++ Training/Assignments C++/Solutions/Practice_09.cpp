/* C++ program to enter week number and print day of week
Write a C++ program to input week number(1-7) and print the 
corresponding day of week name using if else. How to print day of week using 
if else in C++ programming. Logic to convert week number to day of week in C++ programming.

Example
Input
Input week number: 1

Output
Monday

Program to print day name of week
/**
 * C++ program to print day name of week
 */
#include <iostream>
using namespace std;
int main() {
    int week;

    /* Input week number from user */
    cout<<"Enter week number (1-7): ";
    cin>>week;
		
    switch(week){
        case 1: cout<<"Monday"<<endl; break;
        case 2: cout<<"Tuesday"<<endl; break;
        case 3: cout<<"Wednesday"<<endl; break;
        case 4: cout<<"Thursday"<<endl; break;
        case 5: cout<<"Friday"<<endl; break;
        case 6: cout<<"Saturday"<<endl; break;
        case 7: cout<<"Sunday"<<endl; break;
        default: cout<<"Invalid Input! Please enter week number between 1-7."<<endl; break;
    }      
      
    return 0;
}