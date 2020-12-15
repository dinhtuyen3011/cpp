// CPP program to illustrate 
// working of atol() function. 
#include <bits/stdc++.h> 
using namespace std; 
  
int atof_function() 
{ 
    // char array 
    char pi[] = "3.1415926535"; 
  
    // Calling function to convert to a double 
    double pi_val = atof(pi); 
  
    // prints the double value 
    cout << "Value of pi = " << pi_val << "\n"; 
  
    // char array 
    char acc_g[] = "9.8"; 
  
    // Calling function to convert to a double 
    double acc_g_val = atof(acc_g); 
  
    // prints the double value 
    cout << "Value of acceleration due to gravity = "
         << acc_g_val << "\n"; 
    return 0; 
}
/* Output *//*
Value of pi = 3.14159
Value of acceleration due to gravity = 9.8
*/
