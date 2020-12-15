/* Let’s see an example to see raw string literal in C++ */
// C++ program to demonstrate working of raw string. 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // A Normal string 
    string string1 = "IMIC.\nWith.\nTechnology.\n" ;  
  
    // A Raw string 
    string string2 = R"(IMIC.\nWith.\nTechnology.\n)";  
  
    cout << string1 << endl; 
  
    cout << string2 << endl; 
      
    return 0; 
}
/* Output *//*
IMIC.
With.
Technology.

IMIC.\nWith.\nTechnology.\n
*/
