/* 2) Member function declarations with the same name and the name parameter-type-list
cannot be overloaded if any of them is a static member function declaration. */
#include<iostream> 
class Test { 
   static void fun(int i) {} 
   void fun(int i) {}    
}; 
  
int main() 
{ 
   Test t; 
   getchar(); 
   return 0; 
} 
