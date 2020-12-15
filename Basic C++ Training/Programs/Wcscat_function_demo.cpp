//IMIC - An example C++ program to demonstrate use 
// of wcscat() 
#include <iostream> 
#include<cwchar> 
using namespace std; 
  
int main06() 
{ 
    wchar_t string1[] = L"IMIC Technology" ; 
    wchar_t string2[] = L" - keep up technology" ; 
  
    wcscat(string1, string2); 
  
    wcout << L"Concatenated wide string is = "
          << string1 << endl; 
  
    return 0; 
}
/* Output */
// Concatenated wide string is = IMIC Technology - keep up technology
