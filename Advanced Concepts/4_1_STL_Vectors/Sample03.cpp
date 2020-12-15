// C++ program to illustrate the
#include <iostream>     // std::cout
#include <functional>   // std::greater
#include <algorithm>    // std::sort
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    for (int i = 1; i <= 10; i++)
        v.push_back(i * 10);

    cout << "\nReference operator [i] : v[2] = " << v[2];
    cout << "\nAt(4) = " << v.at(4);
    cout << "\nFront() = " << v.front();
    cout << "\nBack() = " << v.back();

    // pointer to the first element
    int* pos = v.data();
    cout << "\nThe first element is " << *pos;
    return 0;
}
/* Output *//*
Reference operator [i] : v[2] = 30
At(4) = 50
front() = 10
back() = 100
The first element is 10 */