/*----- Syntax ----------*//*
 if (condition)
    statement;
 else if (condition)
    statement;
 .
 .
 else
    statement;    
------------------------*/
// C++ program to illustrate if-else-if ladder 
#include<iostream> 
using namespace std; 
  
int main22() 
{ 
    int i = 20; 
   
    if (i == 10) 
        cout<<"i is 10"; 
    else if (i == 15) 
        cout<<"i is 15"; 
    else if (i == 20) 
        cout<<"i is 20"; 
    else
        cout<<"i is not present"; 
} 
/* Output */
// i is 20
