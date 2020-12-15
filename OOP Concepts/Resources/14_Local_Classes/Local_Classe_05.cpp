

// PROGRAM 2 
#include<iostream> 
using namespace std; 
  
void fun()   
{ 
      int x; 
  
      // Local class 
      class Test 
      { 
        public: 
          void method() { 
              cout << "x = " << x << endl;   //error x variable
          } 
      }; 
  
      Test t; 
      t.method(); 
} 
  
int main() 
{ 
    fun(); 
    return 0; 
} 
