#include <iostream>
using namespace std;
//function protype
int check_character(char);

int main() {
    char ch;

    /* Input character from user */
    cout<<"Enter any character: ";
    cin>>ch;

    switch (check_character(ch))
    {
        case 1: cout<<ch<<" is uppercase alphabet."<<endl; break;
        case 0: cout<<ch<<" is lowercase alphabet."<<endl; break;
        case -1: cout<<ch<<" is not an alphabet."<<endl; break;   
    }   
    return 0;
}
int check_character(char ch){
    return ch >= 'A' && ch <= 'Z' ? 1 : 
             ch >= 'a' && ch <= 'z' ? 0 : -1; 
}