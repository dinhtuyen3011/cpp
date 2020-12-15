// map::operator[] in C++ STL
// CPP program to illustrate 
// Implementation of [] operator 
#include <map> 
#include <iostream> 
#include<string> 
using namespace std; 
  
int main() 
{ 
    // map declaration 
    map<int,string> mymap; 
      
    // mapping integers to strings 
    mymap[1] = "welcome"; 
    mymap[2] = "to"; 
    mymap[3] = "imic"; 
    mymap[4] = "technology"; 
      
    // using operator[] to print string  
    // mapped to integer 4 
    cout << mymap[4]; 
    return 0; 
} 