#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            sum+=j;
        }
    }
    cout<<sum;
    return 0;
}