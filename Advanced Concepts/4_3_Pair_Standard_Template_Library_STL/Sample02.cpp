//CPP program to illustrate Initializing of pair STL
#include <iostream>
#include <utility>
using namespace std;

int main()
{
	// Khai bao va khoi tao gia tri cho Pair
    pair <string, double> pi ("IMIC Technology", 8.5);
    
    // Hien thi thong tin cua pair
    cout << pi.first << " " ;
    cout << pi.second << endl;

return 0;
}
/* Output */
// IMIC Technology 8.5
