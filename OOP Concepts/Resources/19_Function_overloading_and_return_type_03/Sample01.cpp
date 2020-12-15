#include<iostream> 
int foo() {  
    return 10;  
} 
  
char foo() {  // compiler error; new declaration of foo() 
    return 'a';  
} 
  
int main() 
{ 
    char x = foo();    
    return 0; 
}