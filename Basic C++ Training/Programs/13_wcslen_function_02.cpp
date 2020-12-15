// c++ program to demonstrate example of wcslen() function. 
#include <bits/stdc++.h> 
using namespace std; 
  
int 13_wcslen_function_02() 
{   
    // Get the string to be used 
    wchar_t str[] = L"A computer science portal for student"; 
  
    // Get the length of the string using wcslen() 
    wcout << L"The length of '" << str 
          << L"' is = " << wcslen(str) << endl; 
  
    return 0; 
}
/* Output *//*
The length of 'A computer science portal for student' is = 37
*/
