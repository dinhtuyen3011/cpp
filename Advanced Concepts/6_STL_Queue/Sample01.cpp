#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //1. Khai bao 1 hang doi kieu int
    queue<int> myqueue;
    
    //2. Dua du lieu vao hang doi
    myqueue.push(10);
    myqueue.push(20);
    myqueue.push(30);
    
    //3. Hien thi du lieu trong hang doi
    while (!myqueue.empty()) {
    	//a. Lay ra phan tu dau
        cout << ' ' << myqueue.front();
        
        //b. Xoa dan cac phan tu
        myqueue.pop();
    }
}
/* Output */
// 10 20 30
