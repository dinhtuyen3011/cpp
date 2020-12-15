/* Using char[] */
// CPP program to illustrate char 
// concatenation using standard functions 
#include <iostream> 
#include <cstring> 
using namespace std; 
  
int main() 
{ 
    // take large size of array 
    char str[] = "Hello"; 
  
    cout << "Before Concatenation : " << str << endl; // Hello 
    strcat(str, " World"); 
    cout << "After Concatenation : " << str; // Hello World 
  
    return 0; 
} 
/* Output *//*
Before Concatenation : Hello
After Concatenation : Hello World
*/ 

