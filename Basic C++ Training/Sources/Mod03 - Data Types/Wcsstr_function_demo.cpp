//IMIC - An example C++ program to demonstrate use 
// of wcsstr() 
#include <iostream> 
#include<cwchar> 
using namespace std; 
  
int main10() 
{ 
    wchar_t string1[] = L"IMIC Technology Viet Nam"; 
    wchar_t* string2 = wcsstr(string1, L"Nam"); 
    wcsncpy(string2, L"Soft", 2); 
    wcout << string1 << endl; 
    return 0; 
}
/* Output */
//IMIC Technology Viet Som
