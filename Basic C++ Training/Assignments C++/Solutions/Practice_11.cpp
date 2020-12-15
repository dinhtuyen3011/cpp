/*C++ program to check whether triangle is valid or not if angles are given
Write a C++ program to check whether a triangle is valid or not if angles 
are given using if else. How to check whether a triangle can be formed or not, 
if its angles are given using if else in C++ programming. Logic to check triangle 
validity if angles are given in C++ program.

Example
Input
Input first angle: 60
Input second angle: 30
Input third angle: 90

Output
The triangle is valid

Logic to check triangle validity if angles are given
Step by step descriptive logic to check whether a triangle can be formed or not, 
if angles are given.

Input all three angles of triangle in some variable say angle1, angle2 and angle3.
Find sum of all three angles, store sum in some variable say sum = angle1 + angle2 + angle3.
Check if(sum == 180) then, triangle can be formed otherwise not. In addition, make sure 
angles are greater than 0 i.e. check condition for angles if(angle1 != 0 && angle2 != 0 && angle3 != 0).

Program to check triangle validity when angles are given
/**
 * C++ program to check whether a triangle is valid or not if angles are given
 */
#include <iostream>
using namespace std;
int main() {
	int angle1, angle2, angle3, sum;

    /* Input all three angles of triangle */
    cout<<"Enter three angles of triangle:"<<endl;
    cin>>angle1>>angle2>>angle3;

    /* Calculate sum of angles */
    sum = angle1 + angle2 + angle3; 

    /*
     * If sum of angles is 180 and
     * angle1, angle2, angle3 is not 0 then
     * triangle is valid.
     */
    if(sum == 180 && angle1 != 0 && angle2 != 0 && angle3 != 0)   
        cout<<"Triangle is valid.";  
    else
        cout<<"Triangle is not valid.";                
	return 0;
}
