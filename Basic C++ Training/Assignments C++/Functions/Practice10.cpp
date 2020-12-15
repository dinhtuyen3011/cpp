#include <iostream>
using namespace std;
//functions protype
string get_day(int, int);
bool check_year(int);

int main() {
   int month;
   int year;

  /* Input month number from user */
  cout<<"Enter month number (1-12): ";
  cin>>month;
  cout<<get_day(month, year);
  return 0;
}

string get_day(int month, int year){
    if(month < 1 || month > 12)
  	    return "Invalid input! Please enter month number between (1-12).";	
	else{
		switch(month){
            case 4:
            case 6:
            case 9:
            case 11: return "30 days";
            case 2:{	  		
                if(check_year(year))   
                    return "29 days";
               	return "28 days";		
            }
			default: return "31 days";
		}
	}
}

bool check_year(int year){
    return (year % 4 == 0 && year % 100 !=0) || year % 400==0 ? true : false;
}  