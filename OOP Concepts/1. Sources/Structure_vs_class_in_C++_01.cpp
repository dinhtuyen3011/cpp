/* 1) Members of a class are private by default and members of a struct are 
public by default.*/

// Program 1 
#include <iostream> 
using namespace std;

class Test { 
    int x; // x is private 
}; 

int main() 
{ 
  Test t; 
  t.x = 20; // compiler error because x is private 
  getchar(); 
  return 0; 
}
   
// Program 2 
#include <iostream>
  
struct Test { 
    int x; // x is public 
}; 

int main() 
{ 
  Test t; 
  t.x = 20; // works fine because x is public 
  getchar(); 
  return 0; 
}

