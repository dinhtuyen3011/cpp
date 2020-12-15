/* Convert character array to string in C++ */
// Demonstrates conversion
// from character array to string
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// uses the constructor in string class
// to convert character array to string
string convertToString(char* a)
{
    string s(a);
    return s;
}

// Driver code
int Character_array_to_string_02()
{
    char a[] = { 'C', 'O', 'D', 'E' };
    char b[] = "imic technology";

    string s_a = convertToString(a);
    string s_b = convertToString(b);

    cout << s_a << endl;
    cout << s_b << endl;

    return 0;
}
/* Output */
// CODE
// imic technology
