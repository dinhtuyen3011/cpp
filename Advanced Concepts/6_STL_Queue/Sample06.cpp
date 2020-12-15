#include <iostream>
#include <queue>
using namespace std;

int main()
{
	//1. Khai bao hang doi
    queue<string> myqueue;
    
    //2. Khoi tao du lieu cho hang doi
    myqueue.emplace("This");
    myqueue.emplace("is");
    myqueue.emplace("a");
    myqueue.emplace("computer");
    myqueue.emplace("science");
    myqueue.emplace("portal");
    
    //3. Duyet du lieu trong hang doi
    while (!myqueue.empty()) {
        cout << ' ' << myqueue.front();
        myqueue.pop();
    }
    return 0;
}
/* Output */
// This is a computer science portal
