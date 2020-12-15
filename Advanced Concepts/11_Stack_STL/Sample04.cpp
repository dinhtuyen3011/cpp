// CPP program to illustrate 
// Implementation of emplace() function 
#include <iostream> 
#include <stack> 
using namespace std; 
  
int main() { 
  stack<int> mystack; 

  // stack becomes 1, 2, 3, 4, 5, 6 
  mystack.top();
  cout << "a";
  // printing the stack 

  return 0; 
} 
// 6 5 4 3 2 1

/*
Difference between stack::emplace() and stack::push() function.
While push() function inserts a copy of the value or the parameter passed to the 
function into the container at the top, the emplace() function constructs a new 
element as the value of the parameter and then adds it to the top of the container.
*/