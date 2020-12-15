#include <iostream>
using namespace std;
//function protype
int find_max(int,int,int);

int main() {
    int num1, num2, num3, max;

    /* Input three numbers from user */
    cout<<"Enter three numbers: ";
    cin>> num1>>num2>>num3;

    /* Print maximum number */
    cout<<"Maximum among all three numbers = "<<find_max(num1, num2, num3);
    	  
	return 0;
}

int find_max(int num1,int num2,int num3){
    return ((num1 > num2) && (num1 > num3)) ? num1 :
             ((num2 > num1) && (num2 > num3)) ? num2 : num3;
}