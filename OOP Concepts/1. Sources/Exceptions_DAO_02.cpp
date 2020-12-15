/*  Trying to delete pointer to a local stack allocated variable. */
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    int x; 
    int* ptr1 = &x; 
  
    // x is present on stack frame as 
    // local variable, only dynamically 
    // allocated variables can be destroyed 
    // using delete operator 
    delete ptr1; 
  
    return 0; 
} 
/* Output */
Runtime error
