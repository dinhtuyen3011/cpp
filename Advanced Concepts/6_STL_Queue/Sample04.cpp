#include <iostream>
#include <queue>
using namespace std;

int main()
{
	//1. Khai bao hang doi
    queue<int> myqueue;
    myqueue.push(1);

	//2. Kiem tra du lieu trong hang doi co Empty
    if (myqueue.empty()) {
        cout << "True";
    }
    else {
        cout << "False";
    }    
    return 0;
}
/* Output */
// False
