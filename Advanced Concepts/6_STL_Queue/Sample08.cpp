#include <iostream>
#include <queue>
using namespace std;

void showq(queue<int> q)
{
    queue <int> qu = q;
    while (!q.empty())
    {
        cout << q.front();
        q.pop();
    }
    cout << '\n';
}

int main()
{
    queue<int> myqueue;
    myqueue.push(10);
    myqueue.push(20);
    myqueue.push(30);
    myqueue.push(40);

    cout << "The queue is : ";
    showq(myqueue);

    cout << "- Size() : " << myqueue.size() <<endl;
    cout << "- Front() : " << myqueue.front() <<endl;
    cout << "- Back() : " << myqueue.back() <<endl;

    cout << "- Pop() : ";
    myqueue.pop();
    showq(myqueue);

    return 0;
}
/* Output *//*
The queue is : 10203040
- Size() : 4
- Front() : 10
- Back() : 40
- Pop() : 203040
*/
