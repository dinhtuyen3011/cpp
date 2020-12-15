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
	Test a;
    return 0; 
} 
