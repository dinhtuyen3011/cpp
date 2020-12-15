#include <iostream>     // std::cout
#include <functional>   // std::greater
#include <algorithm>    // std::sort
#include<vector>

using namespace std;
bool User_Def_Greater(int item1, int item2);

int main()
{
    vector<int> v = {3, 1, 4, 2, 5};
    cout<<"Before sorting: ";
    for_each(v.begin(), v.end(), [](int x) {
        cout << x << " ";
    });

    sort(v.begin(), v.end()); //ASC

    cout<<"\nAfter sorting:  ";
    for_each(v.begin(), v.end(), [](int x) {
       cout << x << " ";
    });

    //To sort in descending order, specify binary predicate
    sort(v.begin(), v.end(), greater<int>());

    cout<<"\nRe-sorted (greater) vector:  ";
    for_each(v.begin(), v.end(), [](int x) {
       cout << x << " ";
    });

    //To sort in descending order, user-defined binary predicate
    sort(v.begin(), v.end(), User_Def_Greater);

    cout<<"\nRe-sorted (user-defined) vector:  ";
    for_each(v.begin(), v.end(), [](int x) {
       cout << x << " ";
    });

  return 0;
}

bool User_Def_Greater(int item1, int item2)
{ return item2 > item1; }

/* Output *//*
Before sorting: 3 1 4 2 5
After sorting:  1 2 3 4 5
Re-sorted (greater) vector:  5 4 3 2 1
Re-sorted (user-defined) vector:  5 4 3 2 1 */