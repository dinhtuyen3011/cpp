// Tokenizing a string using stringstream 
#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 
  
int String_Stream_Demo() 
{       
    string line = "IMIC Technology is a must try"; 
      
    // Vector of string to save tokens 
    vector <string> tokens; 
      
    // stringstream class check1 
    stringstream check1(line); 
      
    string getString; 
      
    // Tokenizing w.r.t. space ' ' 
    while(getline(check1, getString,' ')) 
    { 
        tokens.push_back(getString); 
    } 
      
    // Printing the token vector 
    for(int i = 0; i < tokens.size(); i++) 
        cout << tokens[i] << '\n'; 
}
/* Output *//*
IMIC
Technology
is
a
must
try
*/
