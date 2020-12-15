#include <iostream> 
#include <utility> 
using namespace std; 
  
int main() 
{ 
	// Khai bao va khoi tao pair 01,02,03
    pair <int, char> pi01 ; 
    pair <string, double> pi02 ("IMIC Technology", 8.5) ; 
    pair <string, double> pi03 ; 
  
    // Thiet lap thong tin first va second
    pi01.first = 100; 
    pi01.second = 'I' ; 
  
    // Su dung ham make_pair de khoi tao gia tri cho pair 03
    pi03 = make_pair ("IMIC Technology is Best",9.5); 
  
    // Hien thi thong tin 
    cout << pi01.first << " "; 
    cout << pi01.second << endl; 
  
    cout << pi02.first << " "; 
    cout << pi02.second << endl; 
  
    cout << pi03.first << " "; 
    cout << pi03.second << endl; 
  
    return 0; 
}
/* Output *//*
100 I
IMIC Technology 8.5
IMIC Technology is Best 9.5
*/