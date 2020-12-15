/* One more operator is unary * (Asterisk) which is used for two things :
To declare a pointer variable: When a pointer variable is declared in C/C++, 
there must be a * before its name. */

// C program to demonstrate declaration of 
// pointer variables. 
// C program to demonstrate declaration of 
// pointer variables. 
#include <iostream> 
using namespace std;  
int main() 
{ 
    int x = 10; 
  
    // 1) Since there is * in declaration, ptr 
    // becomes a pointer varaible (a variable 
    // that stores address of another variable) 
    
    // 2) Since there is int before *, ptr is 
    // pointer to an integer type variable 
    int *ptr; 
  
    // & operator before x is used to get address 
    // of x. The address of x is assigned to ptr. 
    ptr = &x; 
  	cout<<ptr;
    return 0; 
}
/* Output */
