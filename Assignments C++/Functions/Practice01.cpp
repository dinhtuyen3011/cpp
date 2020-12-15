#include <iostream>
using namespace std;
//function protype
int find_max(int,int);

int main() {
    int num1, num2;

    /* Input two numbers from user */
    cout<<"Enter one numbers: ";
    cin>>num1;
    
    cout<<"Enter two numbers: ";
    cin>>num2;

    /* Compare num1 with num2 */
    cout<<find_max(num1, num2) <<" is maximum";          
    return 0;
}

int find_max(int a, int b){
    return (a>b) ? a : b;
}