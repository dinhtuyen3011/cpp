// Splits str[] according to given delimiters.
// and returns next token. It needs to be called
// in a loop to get all tokens. It returns NULL
// when there are no more tokens.
// char * strtok(char str[], const char *delims);
// C/C++ program for splitting a string 
// using strtok() 
#include <stdio.h> 
#include <string.h> 
  
int Strtok_String_Demo() 
{ 
    char str[] = "IMIC-with-Technology"; 
  
    // Returns first token  
    char *token = strtok(str, "-"); 
  
    // Keep printing tokens while one of the 
    // delimiters present in str[]. 
    while (token != NULL) 
    { 
        printf("%s\n", token); 
        token = strtok(NULL, "-"); 
    }   
    return 0; 
}
/* Output *//*
IMIC
with
Technology
*/

