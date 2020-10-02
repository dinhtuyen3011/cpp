#include <iostream>
using namespace std;
double powX(int x,int k){
    double s=1;
    while (k>0)
    {
        s*=x;
        k--;
    }
    return s;
}
int main(){
    int n,sum=0;
    cin>>n;
    cout<<(powX(10,n)-1)*10/9-n;
}