/* isspace() in C/C++ and its application to count whitespace characters */
// CPP program to count white spaces in a string 
#include <iostream> 
#include <cstring> 
#include <cctype> 
using namespace std; 
  
// function to calculate whitespaces 
int space(string& str) 
{ 
    int count = 0; 
    int length = str.length(); 
    for (int i = 0; i < length; i++) { 
        int c = str[i]; 
        if (isspace(c)) 
            count++; 
    } 
    return count; 
} 
  
// Driver Code 
int main() 
{ 
    string str = "IMIC Technology Viet Nam 2020"; 
    cout<<"Result: "<< space(str) <<endl; 
    
    return 0; 
}
/* Output */
// Result: 4
