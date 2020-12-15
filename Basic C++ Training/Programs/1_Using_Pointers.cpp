//Using Pointers(Both C and C++)
// C++ program to demonstrate array of strings using 
// 2D character array 
#include <bits/stdc++.h> 
using namespace std; 
  
int 1_Using_Pointers() 
{ 
    // Initialize array of pointer 
    char *colour[4] = { "Blue", "Red", "Orange", "Yellow" }; 
  	
    // Printing Strings stored in 2D array 
    for (int i = 0; i < 4; i++) 
        cout << colour[i] << "\n"; 
  
    return 0; 
}
/* Output *//*
Blue
Red
Orange
Yellow
*/
