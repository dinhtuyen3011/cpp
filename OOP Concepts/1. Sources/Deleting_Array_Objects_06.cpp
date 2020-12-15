/* Deleting variables of User Defined data types */
#include <bits/stdc++.h> 
using namespace std; 
  
struct P { 
    static void operator delete(void* ptr, std::size_t sz) 
    { 
        cout << "custom delete for size " << sz <<endl; 
        delete (ptr); // ::operator delete(ptr) can also be used 
    } 
    static void operator delete[](void* ptr, std::size_t sz) 
    { 
        cout << "custom delete for size " << sz <<endl; 
        delete (ptr); // ::operator delete(ptr) can also be used 
    } 
}; 
  
int main() 
{ 
    P* var1 = new P; 
    delete var1; 
  
    P* var2 = new P[10]; 
    delete[] var2; 
} 
/* Output */
custom delete for size 1
custom delete for size 18
