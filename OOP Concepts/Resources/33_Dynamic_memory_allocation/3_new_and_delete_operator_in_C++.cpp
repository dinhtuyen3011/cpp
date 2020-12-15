/* Nothrow constant *//*
- This constant value is used as an argument for operator new 
and operator new[] to indicate that these functions shall not 
throw an exception on failure, but return a null pointer instead.

- By default, when the new operator is used to attempt to allocate
memory and the handling function is unable to do so, a "bad_alloc" 
exception is thrown. But when nothrow is used as argument for new, 
it returns a null pointer instead.

- This constant (nothrow) is just a value of type "nothrow_t", 
with the only purpose of triggering an overloaded version of the 
function operator new (or operator new[]) that takes an argument 
of this type.

- In C++, the operator new function can be overloaded to take more
than one parameter: The first parameter passed to the operator new 
function is always the size of the storage to be allocated, but 
additional arguments can be passed to this function by enclosing 
them in parentheses in the new-expression. 

For example:*/
#include <iostream> 
using namespace std; 
  
int main () 
{ 
    // Pointer initialization to null 
    int* p = NULL; 
  
    // Request memory for the variable 
    // using new operator 
    p = new(nothrow) int; 
    if (!p) 
        cout << "allocation of memory failed\n"; 
    else
    { 
        // Store value at allocated address 
        *p = 29; 
        cout << "Value of p: " << *p << endl; 
    } 
  
    // Request block of memory 
    // using new operator 
    float *r = new float(75.25); 
  
    cout << "Value of r: " << *r << endl; 
  
    // Request block of memory of size n 
    int n = 5; 
    int *q = new(nothrow) int[n]; 
  
    if (!q) 
        cout << "allocation of memory failed\n"; 
    else
    { 
        for (int i = 0; i < n; i++) 
            q[i] = i+1; 
  
        cout << "Value store in block of memory: "; 
        for (int i = 0; i < n; i++) 
            cout << q[i] << " "; 
    } 
  
    // freed the allocated memory 
    delete p; 
    delete r; 
  
    // freed the block of allocated memory 
    delete[] q; 
  
    return 0; 
}
/* Output *//*
Value of p: 29
Value of r: 75.25
Value store in block of memory: 1 2 3 4 5 
*/
