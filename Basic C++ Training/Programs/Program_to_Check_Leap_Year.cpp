/* C++ Program to Check Leap Year */
//Vi du: 2012, 2004, 1968 v.v ... la nam nhuan nhung, nam 1971, 2006 v.v khong phai la nam nhuan. 
//Tuong tu, 1200, 1600, 2000, 2400 la nam nhuan nhung, 1700, 1800, 1900 v.v lai ko phai nam nhuan.
#include <iostream>
using namespace std;

int Sample102()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    return 0;
}
/* Output */
// Enter a year: 2014
// 2014 is not a leap year.
