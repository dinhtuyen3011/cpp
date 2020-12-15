/* isspace() in C/C++ and its application to count whitespace characters 
Examples:

Input : This is a good website
Output : Number of spaces in the sentence is : 4

Input : heyy this is imic technology
Output : Number of spaces in the sentence is : 4

Input : hello how can I help you
Output : Number of spaces in the sentence is : 5
*/
// C program to illustrate 
// isspace() function 
#include <ctype.h>
#include <iostream>
using namespace std;
// Function for counting spaces
int Count_Space(int i, int count, char* buf)
{
    char chr = buf[0];

    // counting spaces
    while (chr != '\0') {
        chr = buf[i];
        if (isspace(chr))
            count++;
        i++;
    }
    // returning number of spaces
    return (count);
}
int main()
{
    // input sentence
    char buf[50] = "IMIC Technology Viet Nam 2020";

    int i = 0, count = 0;

    // Calling function
    count = Count_Space(i, count, buf);

    // printing number of spaces
    cout<<"Number of spaces in the sentence is "<< count<<endl;

    return 0;
}


