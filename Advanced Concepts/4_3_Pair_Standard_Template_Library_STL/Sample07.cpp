//CPP program to illustrate pair in STL
#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main()
{
    pair <string, int> pi01;
    pair <string, int> pi02("Quiz", 3);
    pair <string, int> pi03(pi02);
    pair <int, int> pi04(5, 10);

    pi01 = make_pair(string("IMIC Technology"), 1);
    pi02.first = ".com";
    pi02.second = 2;

    cout << "This is pair pi0" << pi01.second << " with "
        << "value " << pi01.first << "." << endl << endl;

    cout << "This is pair pi0" << pi02.second
        << " with value " << pi02.first
        << "This pair was initialized as a copy of "
        << "pair pi02" << endl << endl;

    cout << "This is pair pi0" << pi02.second
        << " with value " << pi02.first
        << "\nThe values of this pair were"
        << " changed after initialization."
        << endl << endl;

    cout << "This is pair pi04 with values "
        << pi04.first << " and " << pi04.second
        << " made for showing addition. \nThe "
        << "sum of the values in this pair is "
        << pi04.first+pi04.second
        << "." << endl << endl;

    cout << "We can concatenate the values of"
        << " the pairs pi01, pi02 and pi03 : "
        << pi01.first + pi03.first + pi02.first << endl << endl;

    cout << "We can also swap pairs "
        << "(but type of pairs should be same) : " << endl;
    cout << "Before swapping, " << "pi01 has " << pi01.first
        << " and pi02 has " << pi02.first << endl;
    swap(pi01, pi02);
    cout << "After swapping, "
        << "pi01 has " << pi01.first << " and pi02 has " << pi02.first;

    return 0;
}
