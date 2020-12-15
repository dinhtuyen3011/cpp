#include <iostream> 
using namespace std; 
//function prototype definition in c++
void fun();
  
int main() 
{ 
   fun(); 
   return 0; 
}

void fun() 
{ 
   cout << "Hello"; 
  
   // We can write return in void 
   return;  
}
/* Output */
// Hello
