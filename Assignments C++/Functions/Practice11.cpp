#include <iostream>
using namespace std;
//function protype
bool check_triangle(int,int,int);

int main() {
	int angle1, angle2, angle3, sum;

    /* Input all three angles of triangle */
    cout<<"Enter three angles of triangle:"<<endl;
    cin>>angle1>>angle2>>angle3;
    if(check_triangle(angle1, angle2, angle3))
        cout<<"Triangle is valid.";
    else
        cout<<"Triangle is not valid.";                        
	return 0;
}

bool check_triangle(int angle1, int angle2, int angle3){
    /* Calculate sum of angles */
    int sum = angle1 + angle2 + angle3; 
    return (sum == 180 && angle1 != 0 && angle2 != 0 && angle3 != 0) ? true : false;           
}