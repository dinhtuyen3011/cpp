#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<string> vect{"sample practice", "write", "ide"};

    // We avoid copy of the whole string
    // object by using reference.
    for (const auto &x : vect)
       cout << x << endl;

    return 0;
}
/* Output *//*
sample practice
write
idea
*/
