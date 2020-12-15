#include <iostream>
using namespace std;
//functions protype
bool chec_character(char);

int main() {
    char ch;

    /* Input a character from user */
    cout<<"Enter any character: ";
    cin>>ch;
    
    //ASCII
    if(chec_character(ch))   
        printf("Character is an ALPHABET.");   
    else   
        printf("Character is NOT ALPHABET.");      
      
    return 0;
}
bool chec_character(char ch){
    return (ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90) ? true : false;
}