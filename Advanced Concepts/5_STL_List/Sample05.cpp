#include<iostream>
#include<list>
using namespace std;

int main()
{
    // Khai bao 1 list
    list<int> lis;

    // Khoi tao list iterator
    list<int>::iterator it= lis.begin();

    // Chen phan tu vao cuoi su dung emplace_back()
    // emplace_back: It inserts a new element at the end of the vector.
    for (int i=1; i<=5; i++)
    	lis.emplace_back(i);

    // Hien thi danh sach phan tu
    cout << "- List sau khi emplace_back(): ";
    for (int &x : lis)
		cout << x << " ";
    cout << endl;

    // Chen phan tu vao dau su dung emplace_front()
    for (int i=10; i<=50; i+=10)
    	lis.emplace_front(i);

    // Hien thi danh sach phan tu
    cout << "- List sau khi emplace_front(): ";
    for (int &x : lis)
		cout << x << " ";
    cout << endl;

    // Su dung advance() de chuyen vi tri cho iterator
    advance(it, 2);

    // Chen phan tu tai vi tri 2 su dung emplace()
    lis.emplace(it,100);

    // Hien thi danh sach phan tu
    cout << "- List sau khi emplace(): ";
    for (int &x : lis) cout << x << " ";
    cout << endl;

    return 0;
}
/* Output *//*
- List sau khi emplace_back(): 1 2 3 4 5
- List sau khi emplace_front(): 50 40 30 20 10 1 2 3 4 5
- List sau khi emplace(): 50 100 40 30 20 10 1 2 3 4 5
*/
