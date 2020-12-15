// C++ program to demonstrate example of difftime() function.
#include <bits/stdc++.h>
using namespace std;

int 14_difftime_function()
{
    time_t start, ending;
    long addition;

    time(&start);
    for (int i = 0; i < 20000; i++) {
        for (int j = 0; j < 20000; j++);
    }
    time(&ending);
    cout << "Total time required = "
         << difftime(ending, start)
         << " seconds " << endl;
    return 0;
}
/* Output *//*
Total time required = 1 seconds
*/

