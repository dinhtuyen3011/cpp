/* C++ program to find all roots of a quadratic equation
Write a C++ program to find all roots of a quadratic equation using if else. 
How to find all roots of a quadratic equation using if else in C++ programming. 
Logic to find roots of quadratic equation in C++ programming.

Example
Input
Input a: 8
Input b: -4
Input c: -2

Output
Root1: 0.80
Root2: -0.30

Logic to find all roots of a quadratic equation
Based on the above formula let us write step by step descriptive logic to find roots of a quadratic equation.

Input coefficients of quadratic equation from user. Store it in some variable say a, b and c.
Find discriminant of the given equation, using formula discriminant = (b*b) - (4*a*c).
Learn - Program to find power of a number.

Compute roots based on the nature of discriminant.
If discriminant > 0 then,
root1 = (-b + sqrt(discriminant)) / (2*a) and
root2 = (-b - sqrt(discriminant)) / (2*a).
Learn - Program to find square root of a number using sqrt() function.

If discriminant == 0 then, root1 = root2 = -b / (2*a).
Else if discriminant < 0 then, there are two distinct complex roots where
root1 = -b / (2*a) and root2 = -b / (2*a).
Imaginary part of the root is given by imaginary = sqrt(-discriminant) / (2*a).

After this much reading let us finally code the solution of this program.

Program to find roots of quadratic equation
/**
 * C++ program to find all roots of a quadratic equation
 */
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float a, b, c;
    float x1, x2, imaginary;
    float delta;
    
    cout<<"Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ";
    cin>>a>>b>>c;
    
    /* Find discriminant of the equation */
    delta = (b * b) - (4 * a * c);
       
    /* Find the nature of discriminant */
    if(delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        cout<<"Two distinct and real roots exists: "<< root1 <<"and "<<root2<<endl;
    }
    else if(delta == 0)
    {
        x1 = x2 = -b / (2 * a);
        cout<<"Two equal and real roots exists: "<<x1<<"and "<<x2<<endl;
    }
    else if(delta < 0)
    {
        x1 = x2 = -b / (2 * a);
        imaginary = sqrt(-delta) / (2 * a);
        cout<<"Two distinct complex roots exists: "<< x1 <<"and "<<imaginary<<endl;
    }          
	return 0;
}