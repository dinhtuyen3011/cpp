/* To access address of a variable to a pointer, we use the unary operator & (ampersand) 
 that returns the address of that variable. For example &x gives us address of variable x.*/
 
// The output of this program can be different 
// in different runs. Note that the program 
// prints address of a variable and a variable 
// can be assigned different address in different 
// runs. 
#include <iostream> 
using namespace std;  
  
int main() 
{ 
    int x; 
  
    // Prints address of x 
    cout<<&x;
  
    return 0; 
} 
/* Output */
// 000000000062FE1C