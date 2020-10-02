#include <iostream>
using namespace std;
int square1(int n){
    n*=75;
    cout<<"address of n1 in square1(): "<< &n<<endl;
    return n;
}
int square2(int *n){
    *n*=75;
    cout<<"address of n2 in square2(): "<< n<<endl;
    return *n;
}
int square3(int &n){
    n*=75;
    cout<<"address of n3 in square3(): "<< &n<<endl;
    return n;
}
int main(){
    int n,n2,n3;
    cout<<"n1 -> ";
    cin>> n;
    cout<<endl;
    cout<<"address of n1 in main(): "<<&n<<endl;
    square1(n);
    cout<<"Not change "<<n<<endl;
    cout<<"n2 -> ";
    cin>> n2;
    cout<<endl;
    cout<<"address of n2 in main(): "<<&n2<<endl;
    square2(&n2);
    cout<<"Change "<<n2<<endl;
    cout<<"n3 -> ";
    cin>> n3;
    cout<<endl;
    cout<<"address of n3 in main(): "<<&n3<<endl;
    square3(n3);
    cout<<"Change "<<n3<<endl;
}