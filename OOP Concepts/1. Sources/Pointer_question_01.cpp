/* What will be the output of the following program? */
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    const int i = 20; 
    const int* const ptr = &i; 
    (*ptr)++;      //error
    int j = 15;    
    ptr = &j;      //error
    cout << i; 
    return 0; 
} 
Options:
a. 20
b. 21
c. 15
d. Compile error

//-> Answer: d. Compile error
Explanation:Here “ptr” has been defined as a constant pointer that holds address of a 
constant integer “i”. So, neither can the value of “ptr” be changed, nor can the value 
held by it can be changed. Thus the lines “(*ptr)++” and “ptr=&j” are invalid, as they 
are trying to modify the variable i’s content and the value of the pointer respectively. 
This gives an error.
