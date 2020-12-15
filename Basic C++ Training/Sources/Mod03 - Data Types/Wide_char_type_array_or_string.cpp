//Just like char type array string, there can be a wide-char type array string as well. 
//Below is the C++ implementation to show wide-char type array string.
//IMIC - An example C++ program to demonstrate use 
// of wchar_t in array 
#include <iostream> 
using namespace std; 
  
int main03() 
{ 
    // char type array string 
    char caname[] = "IMIC Technology" ; 
    cout << caname << endl ; 
  
    // wide-char type array string 
    wchar_t waname[] = L"IMIC Technology" ; 
    wcout << waname << endl; 
  
    return 0; 
}
/* Output */
// IMIC Technology
// IMIC Technology
