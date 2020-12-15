//IMIC - An example C++ program to demonstrate use 
// of wcstok() 
#include <iostream> 
#include<cwchar> 
using namespace std; 
  
int main08() 
{ 
    wchar_t string[] = L"IMIC Technology,is,keep up,technology"; 
  
    wchar_t* internal_state;
  
    wchar_t delim[] = L"," ;
    //wchar_t* token  = wcstok(string, delim, &internal_state); 
  
    //while (token)
    //{ 
        //wcout << token << endl;
        //token = wcstok(NULL, delim, &internal_state);
    //}   
    return 0;
}
/* Output */
// 
