#include <iostream>
using namespace std;
string check_number(int);

int main() {
    int num;
    
    /* Input number from user */
    cout<<"Enter any number: ";
    cin>>num;
    cout<<check_number(num);         
	return 0;
}

string check_number(int num){
    return (num > 0) ? "Number is POSITIVE" :
             (num < 0) ? "Number is NEGATIVE" : "Number is ZERO";
}