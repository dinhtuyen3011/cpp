#include<iostream>
using namespace std;

int main()
{
    register int i = 10;
    i++;
    cout << i << endl;
    
    register int a,b,c,d,e,f,g,h,x,z;  // can also produce an error
	// results in _spilling_ a register to stack
	// as the CPU runs out of physical registers
	
	//Do not take an address of the register variable
	register int abc;
	int *bptr = &abc;
	/* this would be an error in most compilers, but
        especially in the embedded world the compilers
        	release the restrictions */
    
    //In some compilers, you can suggest
    register int a asm ("eax");
    // to put a variable to a specific register
    
    /* Here you can use volatile register int i = 10 in 
	C++ to ensure i to be stored in register. 
	volatile keyword will not allow the compiler 
	to optimize the variable i.*/
    volatile register int ij = 10;
	
    return 0;
}
