//IMIC - An example C++ program to demonstrate use 
// of wcslen() 
#include <iostream> 
#include<cwchar> 
using namespace std; 
  
int main04() 
{ 
    // wide-char type array string 
    wchar_t waname[] = L"IMIC Technology" ; 
  
    wcout << L"The length of '" << waname 
          << L"' is " << wcslen(waname) << endl; 
  
    return 0; 
}
/* Output */
// The length of 'IMIC Technology' is 15
