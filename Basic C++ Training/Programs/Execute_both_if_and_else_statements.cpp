#include<iostream> 
int main27() 
{ 
  int i = 10;
  if (i < 0) //Replace 1 with 0 and see the magic 
  { 
    label_1: printf("Hello "); 
      
    // Jump to the else statement after  
    // executing the above statement 
    goto label_2; 
  } 
  else
  { 
    // Jump to 'if block statement' if  
    // the Boolean condition becomes false 
    goto label_1; 
  
    label_2: printf("IMIC"); 
  } 
  return 0; 
} 
/* Output */
// Hellp IMIC
