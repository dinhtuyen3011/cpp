/* strrchr() function in C/C++ *//*
Syntax:
char *strrchr(const char *str, int c)
*/
// C++ program to demonstrate working strchr() 
#include <iostream> 
#include <cstring> 
using namespace std; 
  
int Strrchr_function_demo_01() 
{ 
  char str[] = "This is a string"; 
  char * ch = strrchr(str,'a'); 
  cout << ch - str + 1; 
  return 0; 
}
/* Output */
// 9
