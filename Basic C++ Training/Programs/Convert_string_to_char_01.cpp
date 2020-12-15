/* Convert string to char array in C++ *//*
- A way to do this is to copy the contents of the string to char array. 
This can be done with the help of c_str() and strcpy() function.
- The c_str() function is used to return a pointer to an array that contains a null 
terminated sequence of character representing the current value of the string.
Syntax:
const char* c_str() const;
*/
// CPP program to convert string 
// to char array 
#include <bits/stdc++.h> 
#include <iostream>  
using namespace std; 
  
// driver code 
int Convert_string_to_char_01() 
{ 
    // assigning value to string s 
    string s = "IMIC Technology"; 
  
    int n = s.length(); 
    
    cout<<"n = "<<n<<endl;
  
    // declaring character array 
    char char_array[n + 1]; 
  
    // copying the contents of the 
    // string to char array 
    strcpy(char_array, s.c_str()); 
  
    for (int i = 0; i < n; i++) 
        cout << char_array[i]; 
  
    return 0; 
}
/* Output */
//IMIC Technology


