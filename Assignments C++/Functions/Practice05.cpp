#include <iostream>
using namespace std;
bool check_number(int);

int main() {
    int num;

    /* Input number from user */
    cout<<"Enter any number to check even or odd: ";
    cin>>num;
    
    /* Check if the number is divisible by 2 then it is even */
    if(check_number(num))          
        cout<<"Number is Even.";   
    else           
        cout<<"Number is Odd.";    
      
	return 0;
}
/*
- Return:
  -> true: Number is Even
  -> false: Number is Odd
*/
bool check_number(int num){
    return num % 2 == 0 ? true : false;
}