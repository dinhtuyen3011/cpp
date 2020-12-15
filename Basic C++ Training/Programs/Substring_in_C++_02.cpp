/* Substring in C++ 
Syntax:

string substr (size_t pos, size_t len) const;
Parameters:
pos: Position of the first character to be copied.
len: Length of the sub-string.
size_t: It is an unsigned integral type.

Return value: It returns a string object.*/
// CPP program to illustrate substr() 
#include <string.h> 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // Take any string 
    string s = "imic:technology"; 
  
    // Find position of ':' using find() 
    int pos = s.find(":"); 
  
    // Copy substring after pos 
    string sub = s.substr(pos + 1); 
  
    // prints the result 
    cout << "String is: " << sub; 
  
    return 0; 
}
/* Output */
// String is: technology
