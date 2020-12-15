// c++ program to demonstrate example of wcslen() function.
#include <bits/stdc++.h> 
using namespace std; 
  
int 13_wcslen_function_01() 
{   
    // Get the string to be used 
    wchar_t str[] = L"imic technology"; 
  
    // Get the length of the string using wcslen() 
    wcout << L"The length of '" << str 
          << L"' is = " << wcslen(str) << endl; 
  
    return 0; 
}
/* Output *//*
The length of 'imic technology' is = 15
*/
