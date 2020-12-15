//IMIC - An example C++ program to demonstrate use 
// of wcscmp() 
#include <iostream> 
#include<cwchar> 
using namespace std; 
  
int main07() 
{ 
    wchar_t string1[] = L"IMIC Technology" ; 
    wchar_t string2[] = L"IMIC" ; 
    wcout << L"Comparison1 = "
          << wcscmp(string1, string2) << endl; 
    wcout << L"Comparison2 = "
          << wcscmp(string1, string1) << endl; 
    wcout << L"Comparison3 = "
          << wcscmp(string2, string1) << endl; 
    return 0; 
}
/* Output */
// Comparison1 = 1
// Comparison2 = 0
// Comparison3 = -1
