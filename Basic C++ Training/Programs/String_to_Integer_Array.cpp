/* Convert a String to Integer Array in C/C++ *//*
Examples:

Input : str  = "2, 6, 3, 14"
Output : arr[] = {2, 6, 3, 14}
Sum of the array is = 2 + 6 + 3 + 14 = 25

Input : str = "125, 4, 24, 5543, 111"
Output : arr[] = {125, 4, 24, 5543, 111} 
*/
// C++ program to convert a string to
// integer array
#include <bits/stdc++.h>
using namespace std;

// Fucntion to convert a string to
// integer array
int Convert_Str_to_Arr(string str)
{
    // get length of string str
    int str_length = str.length();

    // create an array with size as string
    // length and initialize with 0
    int arr[str_length] = { 0 };

    int j = 0, i, sum = 0;

    // Traverse the string
    for (i = 0; str[i] != '\0'; i++) {

        // if str[i] is ', ' then split
        if (str[i] == ',')
            continue;
         if (str[i] == ' '){
            // Increment j to point to next
            // array location
            j++;
        }
        else {

            // subtract str[i] by 48 to convert it to int
            // Generate number by multiplying 10 and adding
            // (int)(str[i])
            arr[j] = arr[j] * 10 + (str[i] - 48);
        }
    }

    cout << "arr[] = ";
    for (i = 0; i <= j; i++) {
        cout << arr[i] << " ";
        sum += arr[i]; // sum of array
    }
    return sum;
}

// Driver code
int String_to_Integer_Array()
{
    string str = "2, 6, 3, 14";

    // print sum of array
    cout << "\nSum of array is = " << Convert_Str_to_Arr(str) << endl;

    return 0;
}
/* Output *//*
arr[] = 2 6 3 14
Sum of array is = 25
*/

