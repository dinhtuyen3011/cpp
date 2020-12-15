/* Syntax:
istream& getline(istream& is, 
           string& str, char delim);*/
//+ is: It is an object of istream class and tells the function about the stream from where to 
//read the input from.
//+ str: It is a string object, the input is stored in this object after being read from the stream.
//+ delim: It is the delimitation character which tells the function to stop reading further 
//input after reaching this character.
// C++ program to demonstrate getline() function 
  
#include <iostream> 
#include <string> 
using namespace std; 
  
int getline_string_01() 
{ 
    string str; 
  
    cout << "Please enter your name: \n"; 
    getline(cin, str); 
    
    cout << "Hello, " << str 
         << " welcome to IMIC Technology !\n"; 
  
    return 0; 
} 
/* Input */
// doannv

/* Output */
// Hello, Doannv welcome to IMIC Technology!

