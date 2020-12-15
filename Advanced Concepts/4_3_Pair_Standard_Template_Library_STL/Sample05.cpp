//CPP code to illustrate operators in pair
#include <iostream>
#include<utility>
using namespace std;

int main()
{
    pair<int, int>pi01 = make_pair(9, 12);
    pair<int, int>pi02 = make_pair(9, 12);

    cout << (pi01 == pi02) << " ";
    cout << (pi01 != pi02) << " ";
    cout << (pi01 >= pi02) << " ";
    cout << (pi01 <= pi02) << " ";
    cout << (pi01 > pi02) << " ";
    cout << (pi01 < pi02) << " ";

    return 0;
}
/* Output */
// 1 0 1 1 0 0
