/* Convert character array to string in C++ *//*
Input: char s[] = { 'i', 'm', 'i', 'c', ' ', 't', 'e',
                     'c', 'h', 'n', 'o', 'l', 'o', 'g', 'y' } ;
Output: string s = "imic technology" ;

Input: char s[] = { 'c', 'o', 'd', 'i', 'n', 'g' } ;
Output: string s = "coding" ;
*/
// Demonstrates conversion 
// from character array to string 
#include <iostream>  
#include <bits/stdc++.h> 
using namespace std; 
  
// converts character array 
// to string and returns it 
string convertToString(char* a, int size) 
{ 
    int i; 
    string s = ""; 
    for (i = 0; i < size; i++) { 
        s = s + a[i]; 
    } 
    return s; 
} 
  
// Driver code 
int main() 
{ 
    char a[] = { 'C', 'O', 'D', 'E' }; 
    char b[] = "imic technology"; 
  
    int a_size = sizeof(a) / sizeof(char); 
    int b_size = sizeof(b) / sizeof(char); 
  
    string s_a = convertToString(a, a_size); 
    string s_b = convertToString(b, b_size); 
  
    cout << s_a << endl; 
    cout << s_b << endl; 
  
    return 0; 
}
/* Output */
// CODE
// imic technology
