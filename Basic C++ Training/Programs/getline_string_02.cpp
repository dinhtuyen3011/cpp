// C++ program to understand the use of getline() function
#include <bits/stdc++.h>
using namespace std;

int getline_string_02()
{
    string S, T;
    cout << "Please enter your name: ";
    getline(cin, S);

    cout << "Hello, " << S
         << " welcome to IMIC Technology!"<<endl;

    stringstream X(S);
    while (getline(X, T, ' ')) {
        cout << T << endl;
    }
    
    return 0;
}
