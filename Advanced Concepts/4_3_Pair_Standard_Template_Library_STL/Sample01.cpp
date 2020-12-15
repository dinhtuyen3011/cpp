//CPP program to illustrate pair STL
#include <iostream>
#include <utility>
using namespace std;

int main()
{
	// Khai bao pair trong c++
    pair <int, string> pi;

	// Thiet lap thong tin cho first và second
    pi.first = 100;
    pi.second = "IMIC Technology";

	// Hien thi ra ngoai man hinh
    cout << pi.first << " " ;
    cout << pi.second << endl ;

    return 0;
}
/* Output */
// 100 IMIC Technology
