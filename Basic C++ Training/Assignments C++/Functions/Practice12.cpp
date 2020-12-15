#include <iostream>
using namespace std;
//functions protype
int check_triangle(int, int, int);

int main() {
    int side1, side2, side3;

    /* Input sides of a triangle */
    cout<<"Enter three sides of triangle: ";
    cin>>side1>>side2>>side3;
    switch (check_triangle(side1, side2, side3))
    {
        case 1: cout<<"Equilateral triangle."<<endl; break;
        case 0: cout<<"Isosceles triangle."<<endl; break;
        case -1: cout<<"Scalene triangle."<<endl; break;
    }                   
	return 0;
}
/*
- Return:
  -> 1: ...
  -> 0: ...
  -> -1: ... 
*/
int check_triangle(int side1, int side2, int side3){
    return (side1==side2 && side2==side3) ? 1 : 
             (side1==side2 || side1==side3 || side2==side3) ? 0 : -1;    
}