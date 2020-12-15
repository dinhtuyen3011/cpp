/* List in C++ Standard Template Library (STL) */
#include <iostream>
#include <list>
#include <iterator>
using namespace std;

// Ham hien thi danh sach phan tu trong List
void showlist(list<int> g);

int main()
{
    //1. Khai bao 02 List
    list<int> lis01, lis02;

    //2. Su dung push_back va push_front de cung chen du lieu vao List
    for (int i = 0; i < 10; ++i)
    {
        lis01.push_back(i * 2);
        lis02.push_front(i * 3);
    }

    //3. Hien thi danh sach phan tu trong 2 list
    cout << "- List 01:"<<endl;
    showlist(lis01);

    cout << "- List 02:"<<endl;
    showlist(lis02);

    //4. Su dung ham Front() va Back() de lay phan tu Dau va Cuoi
    cout << "Front(): " << lis01.front() <<endl;
    cout << "Back(): " << lis02.back() <<endl;

    //5. Xoa phan tu trong danh sach
    cout << "Pop_Front : ";
    lis01.pop_front();
    showlist(lis01);

    cout << "Pop_Back : ";
    lis02.pop_back();
    showlist(lis02);

    cout << "Reverse: ";
    lis01.reverse();
    showlist(lis01);

    cout << "Sort(): ";
    lis02.sort(); //ASC
    showlist(lis02);

    return 0;

}
//Ham hien thi cac phan tu trong danh sach List
void showlist(list <int> li)
{
    list <int> :: iterator it;
    for(it = li.begin(); it != li.end(); ++it)
        cout << " "<< *it;
    cout << '\n';
}
/* Output *//*
- List 01:
 0 2 4 6 8 10 12 14 16 18
- List 02:
 27 24 21 18 15 12 9 6 3 0
Front(): 0
Back(): 0
Pop_Front :  2 4 6 8 10 12 14 16 18
Pop_Back :  27 24 21 18 15 12 9 6 3
Reverse:  18 16 14 12 10 8 6 4 2
Sort():  3 6 9 12 15 18 21 24 27
*/