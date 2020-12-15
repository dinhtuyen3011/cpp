#include <iostream>
using namespace std;
//function protype
bool check_year(int);

int main() {
    int year;

    /* Input year from user */
    cout<<"Enter year : ";
    cin>>year;
    /*
     * If year is exactly divisible by 4  and year is not divisible by 100
     * or year is exactly divisible by 400 then
     * the year is leap year.
     * Else year is normal year
     */
    if(check_year(year))   
        cout<<"LEAP YEAR";    
    else   
        cout<<"COMMON YEAR";      
      
    return 0;
}
bool check_year(int year){
    return (year % 4 == 0 && year % 100 !=0) || year % 400==0 ? true : false;
}   