#include <iostream>
#include <math.h>
using namespace std;
//function protype
pair<float, float> execute(float a,float b, float c);

int main() {
    float a, b, c;    
    float delta;
    
    cout<<"Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ";
    cin>>a>>b>>c;
    pair<float, float> result = execute(a,b,c);
    cout<<"- first: "<<result.first <<endl;
    cout<<"- second: "<<result.second <<endl;
	return 0;
}

pair<float, float> execute(float a,float b, float c) {
    float x1, x2;    
    float imaginary;
    float delta = (b * b) - (4 * a * c);
       
    /* Find the nature of discriminant */
    if(delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        return make_pair(x1,x2);        
    }
    else if(delta == 0)
    {
        x1 = x2 = -b / (2 * a);
        return make_pair(x1,x2);        
    }
    else if(delta < 0)
    {
        x1 = x2 = -b / (2 * a);
        imaginary = sqrt(-delta) / (2 * a);
        return make_pair(x1,imaginary);
    }        
}