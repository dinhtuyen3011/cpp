// C++ program to demonstrate
// anomaly of delimitation of
// getline() function
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int id;

    // Taking id as input
    cout << "Please enter your id: ";
    cin >> id;

    // Takes the empty character as input
    getline(cin, name);
    cout << "Please enter your name: ";
    getline(cin, name);

    // Prints id
    cout << "Your id : "<< id;

    // Prints nothing in name field
    // as "\n" is considered a valid string
    cout << "Hello, " << name
         << " welcome to IMIC Technology!"<<endl;

    // Again Taking string as input
    cout << "Please enter your name: ";
    getline(cin, name);

    // This actually prints the name
    cout << "Hello, " << name
         << " welcome to IMIC Technology!"<<endl;

    return 0;
}
/* */
