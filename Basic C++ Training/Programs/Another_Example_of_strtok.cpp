/* Another Example of strtok */
// C code to demonstrate working of strtok 
#include <string.h>
#include <iostream>
using namespace std;

// Driver function
int Another_Example_of_strtok()
{
 // Declaration of string
    char data[100] = " IMIC - with - Technology - 2020";

    // Declaration of delimiter
    const char s[4] = "-";
    char* tok;

    // Use of strtok get first token
    tok = strtok(data, s);

    // Checks for delimeter
    while (tok != 0) {
        cout<<tok<<endl;

        // Use of strtok
        // go through other tokens
        tok = strtok(0, s);
    }
    return (0);
}
/* Output *//*
  IMIC
  with
  Technology
  2020
  */
