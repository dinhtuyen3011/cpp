#include <iostream>
using namespace std;
//function protype
string check_week(int);

int main() {
    int week;

    /* Input week number from user */
    cout<<"Enter week number (1-7): ";
    cin>>week;
	cout<<check_week(week);
    
    return 0;
}
string check_week(int week){
    switch(week){
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
        case 7: return "Sunday";
        default: return "Invalid Input! Please enter week number between 1-7.";
    }
}