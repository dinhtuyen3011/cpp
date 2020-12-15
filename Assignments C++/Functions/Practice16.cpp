#include <iostream>
using namespace std;
//functions protype
float total(int);

int main() {
    int unit;    
    /* Input unit consumed from user */
    cout<<"Enter total units consumed: ";
    cin>>unit;
    cout<<"Electricity Bill "<<total(unit);  
    return 0;
}

float total(int unit){
    float amt, total_amt, sur_charge;
    /* Calculate electricity bill according to given conditions */
    if(unit <= 50)  
        amt = unit * 0.50;
    else if(unit <= 150)  
        amt = 25 + ((unit-50) * 0.75);
    else if(unit <= 250)
        amt = 100 + ((unit-150) * 1.20);
    else
        amt = 220 + ((unit-250) * 1.50);
    /*
    * Calculate total electricity bill
    * after adding surcharge
    */
    return (amt * 0.20)+amt;       
}