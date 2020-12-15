#include <iostream>
using namespace std;
//functions protype
float salary(float,float,float);

int main() {
    float basic;

    /* Input basic salary of employee */
    cout<<"Enter basic salary of an employee: ";
    cin>>basic;
    cout<<"GROSS SALARY OF EMPLOYEE = "<<salary(basic);              
    return 0;
}

float salary(float basic){
    /* Calculate D.A and H.R.A according to specified conditions */
    float gross, da, hra;
    if(basic <= 10000){
        da  = basic * 0.8;
        hra = basic * 0.2;
    }       
    else if(basic <= 20000){
        da  = basic * 0.9;
        hra = basic * 0.25;
    }     
    else{
        da  = basic * 0.95;
        hra = basic * 0.3;     
    }
    /* Calculate gross salary */
    return basic + hra + da; 
}