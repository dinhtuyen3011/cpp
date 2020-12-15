#include <iostream>
using namespace std;
string check_number(int);

int main() {
    int num;
    
    /* Input number from user */
    cout<<"Enter any number: ";
    cin>>num;
    cout<<"Number is "<<check_number(num);         
	return 0;
}

string check_number(int num){
    return (num > 0) ? "POSITIVE" : (num < 0) ? "NEGATIVE" : "ZERO";
}