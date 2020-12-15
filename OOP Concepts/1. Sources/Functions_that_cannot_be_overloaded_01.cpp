/* 1) Function declarations that differ only in the return type. */
#include<iostream> 
int foo() {  
  return 10;  
} 
  
char foo() {  
  return 'a';  
} 
  
int main() 
{ 
   char x = foo(); 
   getchar(); 
   return 0; 
} 
