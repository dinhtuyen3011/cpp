/* How to convert a single character to string in C++? *//*
Examples:

Input :  x = 'a'
Output : string s = "a"

Input :  x = 'b'
Output : string s = "b"
*/
// Create a string of size n and fill
// the string with character x.
// string s(int n, char x);
// CPP program to get a string from single 
// character. 
#include<bits/stdc++.h> 
using namespace std; 
  
string getString(char x) 
{ 
    // string class has a constructor 
    // that allows us to specify size of 
    // string as first parameter and character 
    // to be filled in given size as second 
    // parameter. 
    string s(1, x); 
  
    return s;    
} 
  
int Single_character_to_string_01() { 
  cout << getString('a'); 
  return 0; 
} 
