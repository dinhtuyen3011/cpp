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
    string s1 = "IMIC Technology"; 
  
    // Copy three characters of s1 (starting  
    // from position 1) 
    string r = s1.substr(1, 3); 
  
    // prints the result 
    cout << "String is: " << r; 
  
    return 0; 
}
/* Output */
// String is: MIC
