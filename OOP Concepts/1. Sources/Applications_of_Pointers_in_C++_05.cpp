#include <iostream>
using namespace std;

int main3() {
	//1. Declare an array 
    int arr[3] = {10, 100, 200}; 
  
    //2. Declare pointer variable 
    int *ptr; 
  
    //3. Assign the address of arr[0] to ptr 
    ptr = arr; 
  
    for (int i = 0; i < 3; i++) 
    { 
        cout<<"Value of *ptr = "<< *ptr <<endl; 
        cout<<"Value of ptr = "<< ptr <<endl; 
  
        // Increment pointer ptr by 1 
        ptr++; 
    } 
	return 0;
}
/* Output *//*
Value of *ptr = 10
Value of ptr = 0x70fdf0
Value of *ptr = 100
Value of ptr = 0x70fdf4
Value of *ptr = 200
Value of ptr = 0x70fdf8
*/
