#include <iostream>
#include <algorithm>
using namespace std;
const int SIZE = 7;
int main()
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    int intArray[7] = {5, 3, 32, -1, 1, 104, 53};

    //Now we call the sort function
    sort(intArray, intArray + 7);  //ASC
=======
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
    int intArray[SIZE] = {5, 3, 32, -1, 1, 104, 53};

    //Now we call the sort function
    sort(intArray, intArray + SIZE);  //ASC
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 2d049090d79352aeb26b3f29c4a94e36b97f3eaa
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062
=======
>>>>>>> aa52cfc572113fffd214c9f2e75671fa3de11062

    cout << "Sorted Array looks like this" << endl;
    for (int i = 0; i != SIZE; ++i)
        cout << intArray[i] << " ";

    return 0;
}
/* Output *//*
Sorted Array looks like this
-1 1 3 5 32 53 104
*/
