//CPP program to illustrate auto-initializing of pair STL
#include <iostream>
#include <utility>
using namespace std;

int main()
{
	// Khai bao 02 pair
    pair <int, double> pi01;
    pair <string, char> pi02;

	// Hien thi thong tin first va second
    cout << pi01.first;  //it is initialised to 0
    cout << pi01.second; //it is initialised to 0

	// Hien thi thong tin first va second
    cout << pi02.first;  //it prints nothing i.e NULL
    cout << pi02.second; //it prints nothing i.e NULL

    return 0;
}