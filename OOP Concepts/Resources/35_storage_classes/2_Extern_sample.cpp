/*
- Extern storage class simply tells us that the variable is defined 
elsewhere 
and not within the same block where it is used. 
- Basically, the value is assigned to it in a different block and 
this can be 
overwritten/changed in a different block as well. 
- So an extern variable is nothing but a global variable initialized 
with a 
legal value where it is declared in order to be used elsewhere. 
- It can be accessed within any function/block. Also, a normal 
global variable 
can be made extern as well by placing the ‘extern’ keyword before its 
declaration/definition in any function/block. 
- This basically signifies that we are not initializing a new 
variable but instead 
we are using/accessing the global variable only. The main purpose 
of using extern 
variables is that they can be accessed between two different files 
which are part 
of a large program. 
*/
#include <iostream> 
using namespace std; 
  
// declaring the variable which is to 
// be made extern an intial value can 
// also be initialized to x 
int x; 

int main() 
{   
    extern int x;   
    cout << "Value of the variable 'x'"
         << "declared, as extern: " << x << "\n"; 
  
    // value of extern variable x modified 
    x = 2; 
  
    // printing the modified values of 
    // extern variables 'x' 
    cout 
        << "Modified value of the variable 'x'"
        << " declared as extern: \n"
        << x; 
  
    return 0; 
}
/* Output *//*
Value of the variable 'x'declared, as extern: 0
Modified value of the variable 'x' declared as extern: 2
*/