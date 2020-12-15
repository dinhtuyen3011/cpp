/* Pointer Expressions and Pointer Arithmetic */
// C++ program to illustrate Pointer Arithmetic 
// in C/C++ 
#include <iostream>
using namespace std;
// Driver program 
int main() 
{ 
    // Declare an array 
    int ar[3] = {10, 100, 200}; 
  
    // Declare pointer variable 
    int *ptr; 
  
    // Assign the address of ar[0] to ptr 
    ptr = ar; 
  
    for (int i = 0; i < 3; i++) 
    { 
        cout<<"Value of *ptr = "<<*ptr<<endl; 
        cout<<"Value of ptr = "<<ptr<<endl; 
  
        // Increment pointer ptr by 1 
        ptr++; 
    } 
} 
/* Output *//*
Value of *ptr = 10
Value of ptr = 0x6ffdf0
Value of *ptr = 100
Value of ptr = 0x6ffdf4
Value of *ptr = 200
Value of ptr = 0x6ffdf8
*/