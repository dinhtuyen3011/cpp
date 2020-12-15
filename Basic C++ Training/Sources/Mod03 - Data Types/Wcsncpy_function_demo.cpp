//IMIC - An example C++ program to demonstrate use 
// of wcsncpy() 
#include <iostream> 
#include<cwchar> 
using namespace std; 
  
int main09() 
{ 
    wchar_t string1[] = L"IMIC Technology Viet Nam"; 
    wchar_t string2[20]; 
    wchar_t string3[20]; 
  
    wcsncpy(string2, string1, 20); 
  
    // partial copy 
    wcsncpy(string3, string2, 5); 
  
    string3[5] = L'\0';   // null character manually added 
  
    wcout << string1 << endl << string2 
          << endl << string3 ; 
  
    return 0; 
}
/* Output */
//IMIC Technology Viet Nam
//IMIC Technology Viet
//IMIC
