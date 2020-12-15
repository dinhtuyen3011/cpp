#include <iostream>
using namespace std;
//functions protype
int get_day(int, int);
bool check_year(int);

int main() {
   int month;
   int year;

  /* Input month number from user */
  cout<<"Enter month number (1-12): ";
  cin>>month;
  if(month < 1 || month > 12)
  	cout<<"Invalid input! Please enter month number between (1-12).";
  else
    cout<<get_day(month, year)<<" days";
    
  return 0;
}

int get_day(int month, int year){    
    switch(month){
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2:{	  		
            if(check_year(year))   
                return 29;
            return 28;		
        }
        default: return 31;
    }	
}

bool check_year(int year){
    return (year % 4 == 0 && year % 100 !=0) || year % 400==0 ? true : false;
}  