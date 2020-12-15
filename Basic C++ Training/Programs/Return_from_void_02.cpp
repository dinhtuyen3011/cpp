#include <iostream> 
using namespace std; 
//function prototype definition in c++
void work();
void test();

int main() 
{     
    test();     
    return 0; 
}

void work() { 
    cout << "The void function!!!"; 
}   

void test() {    
    return work(); 
} 
/* Output */
// The void function!!! 
