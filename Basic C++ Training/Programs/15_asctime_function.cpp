// c++ program to demonstrate example of asctime() function. 
#include <bits/stdc++.h> 
using namespace std; 
  
int 15_asctime_function() 
{ 
    time_t time_ptr; 
   
    time(&time_ptr); 
    cout << "Current date and time = "
         << asctime(localtime(&time_ptr)); 
  
    return 0; 
}
/* Output *//*
Current date and time = Thur May 02 11:34:12 2019
*/
