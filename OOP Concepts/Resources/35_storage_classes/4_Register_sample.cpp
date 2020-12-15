/*
- This storage class declares register variables which have the same functionality 
as that of the auto variables. 
- The only difference is that the compiler tries to store these variables in the 
register of the microprocessor if a free register is available. 
- This makes the use of register variables to be much faster than that of the variables 
stored in the memory during the runtime of the program. 
- If a free register is not available, these are then stored in the memory only. 
- Usually, a few variables which are to be accessed very frequently 
in a program are 
declared with the register keyword which improves the running time 
of the program. 
- An important and interesting point to be noted here is that 
we cannot obtain the 
address of a register variable using pointers. 
*/
#include <iostream> 
using namespace std; 

int main() 
{   
    // declaring a register variable 
    register char b = 'I'; 
     
    cout << "Value of the variable 'b'"
         << " declared as register: " << b; 
    return 0; 
} 
// Value of the variable 'b' declared as register: I