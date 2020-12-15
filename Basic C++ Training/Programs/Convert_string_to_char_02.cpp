/* Another approach: */
// CPP program to convert string 
// to char array 
#include <iostream> 
#include <string.h> 
  
using namespace std; 
  
// driver code 
int Convert_string_to_char_02() 
{ 
    // assigning value to string s 
    string s("imic technology"); 
    // declaring character array : p 
    char p[s.length()]; 
  
    int i; 
    for (i = 0; i < sizeof(p); i++) { 
        p[i] = s[i]; 
        cout << p[i]; 
    } 
    return 0; 
}
/* Output */
// imic technology
