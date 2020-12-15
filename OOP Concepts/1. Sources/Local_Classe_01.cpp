#include<iostream> 
using namespace std; 
  
void fun()   
{ 
  class Test  // local to fun 
  { 
    /* members of Test class */
  }; 
} 
  
int main() 
{ 
    return 0; 
} 
