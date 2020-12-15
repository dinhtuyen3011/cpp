/* Function Overloading in C++ */
#include <iostream> 
using namespace std; 
  
void print(int i) { 
  cout << " Here is int " << i << endl; 
} 
void print(double  f) { 
  cout << " Here is float " << f << endl; 
} 
void print(char const *c) { 
  cout << " Here is char* " << c << endl; 
} 
  
int main() { 
  print(10); 
  print(10.10); 
  print("ten"); 
  return 0; 
}
/* Output *//*
Here is int 10 
Here is float 10.1 
Here is char* ten 
*/
