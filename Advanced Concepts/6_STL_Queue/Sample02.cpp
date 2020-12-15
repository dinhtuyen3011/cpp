#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //1. Khai bao hang doi
    queue<int> myqueue;
    
    //2. Dua du lieu vao hang doi
    myqueue.push(10);
    myqueue.push(20);
    myqueue.push(30);
    myqueue.push(40);
    myqueue.push(50);
    myqueue.push(60);

  	//3. Xoa phan tu trong hang doi
    myqueue.pop();
    myqueue.pop();

    //4. Hien thi danh sach phan tu trong hang doi
    while (!myqueue.empty()) {
        cout << ' ' << myqueue.front();
        myqueue.pop();
    }
}
/* Output */
// 30 40 50 60
