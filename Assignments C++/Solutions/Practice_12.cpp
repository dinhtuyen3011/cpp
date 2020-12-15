/*C++ program to check whether triangle is equilateral, scalene or isosceles
Write a C++ program to input sides of a triangle and check whether a triangle is 
equilateral, scalene or isosceles triangle using if else. How to check whether 
a triangle is equilateral, scalene or isosceles triangle in C++ programming. 
Logic to classify triangles as equilateral, scalene or isosceles triangle if 
sides are given in C++ program.

Example
Input
Input first side: 30
Input second side: 30
Input third side: 30

Output
Triangle is equilateral triangle

Logic to check equilateral, scalene or isosceles triangle
Step by step descriptive logic to classify triangle as equilateral, scalene or isosceles triangle.

Input sides of a triangle from user. Store it in some variables say side1, side2 and side3.
Check if(side1 == side2 && side2 == side3), then the triangle is equilateral.
If it is not an equilateral triangle then it may be isosceles. Check if(side1 == side2 || side1 == side3 || side2 == side3), then triangle is isosceles.
If it is neither equilateral nor isosceles then it scalene triangle.

Program to check equilateral, scalene or isosceles triangle
/**
 * C++ program to check whether a triangle is Equilateral, Isosceles or Scalene
 */
#include <iostream>
using namespace std;
int main() {
    int side1, side2, side3;

    /* Input sides of a triangle */
    cout<<"Enter three sides of triangle: ";
    cin>>side1>>side2>>side3;

    if(side1==side2 && side2==side3)   
        /* If all sides are equal */
        cout<<"Equilateral triangle."<<endl;  
    else if(side1==side2 || side1==side3 || side2==side3)   
        /* If any two sides are equal */
        cout<<"Isosceles triangle."<<endl;  
    else   
        /* If none sides are equal */
        cout<<"Scalene triangle."<<endl;             
	return 0;
}
