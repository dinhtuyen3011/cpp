#include<iostream>
using namespace std;

int f ( int x) {
    return x+10;
}

int f ( const float x) {
    return x+10;
}

int main() { 
	int a=f(const 10);
  	return 0;
}
