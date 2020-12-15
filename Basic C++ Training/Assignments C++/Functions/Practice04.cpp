#include <iostream>
using namespace std;
//function protype
bool check_number(int);

int main() {
    int num;

    /* Input number from user */
    cout<<"Enter any number: ";
    cin>>num;

    /*
     * If  num modulo division 5 is 0 
     * and num modulo division 11 is 0 then
     * the number is divisible by 5 and 11 both
     */
    if(check_number(num))
        cout<<"Number is divisible by 5 and 11";
    else
        cout<<"Number is not divisible by 5 and 11";    
	return 0;
}
bool check_number(int num){
    return (num % 5 == 0) && (num % 11 == 0) ? true : false;
}