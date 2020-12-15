/*
- This storage class is used to declare static variables which are popularly used 
while writing programs in C++ language. 
- Static variables have a property of preserving their value even after they are 
out of their scope! Hence, static variables preserve the value of their last use in 
their scope. 
- So we can say that they are initialized only once and exist until the termination 
of the program. 
- Thus, no new memory is allocated because they are not re-declared. 
- Their scope is local to the function to which they were defined. 
- Global static variables can be accessed anywhere in the program. 
- By default, they are assigned the value 0 by the compiler.
*/
#include <iostream> 
using namespace std;   
// Function containing static variables 
// memory is retained during execution 
int staticFun() 
{ 
    cout << "For static variables: "; 
    static int count = 0; 
    count++; 
    return count; 
} 
  
// Function containing non-static variables 
// memory is destroyed 
int nonStaticFun() 
{ 
    cout << "For Non-Static variables: ";  
    int count = 0; 
    count++; 
    return count; 
} 
  
int main() 
{       
    cout << staticFun() << "\n"; 
    cout << staticFun() << "\n";    
    cout << nonStaticFun() << "\n";    
    cout << nonStaticFun() << "\n";    
    return 0; 
} 
/* Output *//*
For static variables: 1
For static variables: 2
For Non-Static variables: 1
For Non-Static variables: 1
*/