#include <iostream>
using namespace std;
int main(){
    int temp;
    cin>>temp;
    if(temp<=0){
        cout<<"Frozen\n";
    }
    else if(temp>0&&temp<=12)
    {
        cout<<"Cold\n";
    }
    else if(temp>12&&temp<=25)
    {
        cout<<"Warn\n";
    }
    else if(temp>25&&temp<=75)
    {
        cout<<"Hot\n";
    }
    else if(temp>75&&temp<=100)
    {
        cout<<"Very hot\n";
    }
    else
    {
        cout<<"Burning\n";
    }
    
}