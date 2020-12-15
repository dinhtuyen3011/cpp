/* C++ program to check whether a character is Uppercase or Lowercase
Write a C++ program to input character from user and check whether character 
is uppercase or lowercase alphabet using if else. How to check uppercase and 
lowercase using if else in C++ programming. Logic to check uppercase and lowercase 
alphabets in C++ program.

Example
Input
Input character: C++

Output
'C++' is uppercase alphabet

Program to check uppercase or lowercase alphabets
/**
 * C++ program to check whether a character is uppercase or lowercase 
 */
#include <iostream>
using namespace std;
int main() {
    char ch;

    /* Input character from user */
    cout<<"Enter any character: ";
    cin>>ch;

    if(ch >= 'A' && ch <= 'Z')    
       cout<<ch<<" is uppercase alphabet."<<endl;   
    else if(ch >= 'a' && ch <= 'z')    
       cout<<ch<<" is lowercase alphabet."<<endl;    
    else    
       cout<<ch<<" is not an alphabet."<<endl;          
      
    return 0;
}
