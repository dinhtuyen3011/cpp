// C program to demonstrate ctime() function. 
#include <stdio.h> 
#include <time.h> 
  
int 18_ctime_Function_demo() { 
    time_t curtime; 
      
    time(&curtime); 
      
    printf("Current time = %s", ctime(&curtime)); 
      
    return(0); 
}
/* Output *//*
Current time = Thur May 02 11:34:12 2019
*/
