#include<iostream>
#include<list>
using namespace std;

int main()
{
    // Khoi tao danh sach list01
    list<int> lis01 = {10, 20, 30};

    // Khoi tao danh sach list02
    list<int> lis02 = {40, 50, 60};

    // Su dung ham merge() de nhap du lieu list01 voi list02
    lis01.merge(lis02);

    // Hien thi danh sach phan tu:
    cout << "- Sau khi Merge(): ";
    for (int &x : lis01)
        cout << x << " ";
    cout << endl;

    // Su dung ham remove_if() de xoa phan tu cu
    lis01.remove_if([](int x){return x%3!=0;});

    // Hien thi danh sach phan tu:
    cout << "- Sau khi remove_if(): ";
    for (int &x : lis01)
        cout << x << " ";
    cout << endl;

    return 0;

}
/* Output *//*
- Sau khi Merge(): 10 20 30 40 50 60
- Sau khi remove_if(): 30 60
*/
