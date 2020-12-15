#include <bits/stdc++.h>
#include <tuple>
using namespace std;

tuple<int, int, char> foo(int n1, int n2) {
    return make_tuple(n2, n1, 'a');
}

pair<int, int> foo1(int num1, int num2) {
    return make_pair(num2, num1);
}

int main()
{
    int a,b;
    char cc;

    // Unpack the elements returned by foo
    tie(a, b, cc) = foo(5, 10);

    // Storing  returned values in a pair
    pair<int, int> p = foo1(5,2);

    cout << "Tuple: ";
    cout << a << " " << b << " " << cc << endl;

    cout << "Pair: ";
    cout << p.first << " " << p.second;
    
    return 0;
}
/* Output *//*
 Tuple: 10 5 a
 Pair: 2 5
*/

