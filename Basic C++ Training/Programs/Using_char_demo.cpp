/* Using char* */
// CPP program to illustrate *char 
#include <iostream> 
using namespace std; 
  
int main()
{ 
    // pointer str points to const string literal "Hello". 
    // No need to declare size. 
    char* str1 = "This is IMIC Technology"; 
  
    cout << str1 << endl; 
  
    int size = 30; 
  
    // can allocate size dynamically. 
    char* str2 = (char*)malloc(sizeof(char) * size); 
  
    str2 = "IMIC For Everyone"; 
  
    cout << str2; 
  
    return 0; 
} 
/* Output *//*
This is IMIC Technology
IMIC For Everyone
*/
