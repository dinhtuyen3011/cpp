#include <iostream>
#include <list>
using namespace std;

int main()
{
    // Khai bao danh sach phan tu
    list<int> mylist{ 10, 20, 30, 40, 50 };

    // Su dung begin() and end() de hien thi list
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        cout << ' ' << *it;

    return 0;
}
/* Output */
// 10 20 30 40 50
