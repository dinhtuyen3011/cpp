// c++ program to demonstrate example of wcscmp() function.  
#include <bits/stdc++.h> 
using namespace std; 
  
int 11_wcscmp_function_01() 
{ 
    // initialize the str1 
    wchar_t str1[] = L"Computer"; 
  
    // initialize the str2 
    wchar_t str2[] = L"Science"; 
  
    // Compare and print results 
    wcout << L"Comparing " << str1 << L" and "
          << str2 << L" = " << wcscmp(str1, str2) << endl; 
  
    // Compare and print results 
    wcout << L"Comparing " << str2 << L" and "
          << str2 << L" = " << wcscmp(str2, str2) << endl; 
  
    // Compare and print results 
    wcout << L"Comparing " << str2 << L" and "
          << str1 << L" = " << wcscmp(str2, str1) << endl; 
  
    return 0; 
} 
/* Output *//*
Comparing Computer and Science = -1
Comparing Science and Science = 0
Comparing Science and Computer = 1
*/
