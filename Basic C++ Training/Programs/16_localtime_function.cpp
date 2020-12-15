// c++ program to demonstrate example of localtime() function. 
#include <bits/stdc++.h> 
using namespace std; 
  
int 16_localtime_function() 
{ 
    time_t time_ptr; 
    time_ptr = time(NULL); 
  
    // Get the localtime 
    tm* tm_local = localtime(&time_ptr); 
  
    cout << "Current local time is = "
         << tm_local->tm_hour << ":"
         << tm_local->tm_min << ":"
         << tm_local->tm_sec; 
  
    return 0; 
}
/* Output *//*
Current local time is = 11:35:20
*/

