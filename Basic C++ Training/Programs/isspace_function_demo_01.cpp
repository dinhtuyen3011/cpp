/* isspace() in C/C++ and its application to count whitespace characters *//*
‘ ‘ – Space
‘\t’ – Horizontal tab
‘\n’ – Newline
‘\v’ – Vertical tab
‘\f’ – Feed
‘\r’ – Carriage return
Syntax :
int isspace(int x)
x : x is character to be checked

Examples:

Input : string = 'IMIC Technology Viet Nam'
Output : 3

Input :string = 'My name is Doannv'
Output : 3

*/
// C program to illustrate 
// isspace() function 
#include <ctype.h> 
#include <stdio.h> 
int isspace_function_demo_01() 
{ 
    // taking input 
    char ch = ' '; 
  
    // checking is it space? 
    if (isspace(ch)) 
        printf("\nEntered character is space"); 
    else
        printf("\nEntered character is not space"); 
}
/* Output */
// Entered character is space

