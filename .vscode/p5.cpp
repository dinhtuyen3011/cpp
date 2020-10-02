#include <iostream>
using namespace std;
class Shape
{
protected:
    int width;
    int height;
public:
    Shape(int wid,int heig): width(wid),height(heig){};
    ~Shape();
    virtual float Area() =0;
    virtual float Perimetter()=0;
};
class Rectangle:public Shape
{
private:
    
public:
    Rectangle(int width, int height): Shape(width ,height){};
    ~Rectangle();
    float Area(){
        return width*height;
    }
    float Perimetter(){
        return (width +height)*2;
    }
};
class Triangle:public Shape
{
private:
    int c;
public:
    Triangle(int width, int height,int x): Shape(width ,height),c(x){};
    ~Triangle();
    float Area(){
        return (width*height)/2;
    }
    float Perimetter(){
        return (width +height+c);
    }
    
};
class Circle:public Shape
{
private:
    int radius;
public:
    Circle(int width, int height, int radi): Shape(width,height), radius(radi){};
    ~Circle();
    float Area(){
        return radius*radius*3.14;
    }
    float Perimetter(){
        return radius*2*3.14;
    }
    
};
int main(){
    int a;
    Shape *sp;
    cin>>a;
    switch (a)
    {
    case 0:
        sp=new Rectangle(2,3);
        break;
    case 1:
    sp=new Triangle(2,3,4);
    break;
    case 2:
    sp=new Circle(1,2,2);
    break;

    default:
    cout<<"Not shape";
        break;
    }
    cout<<"choice: "<<a<<endl;
    
        
        cout<<"Area: "<<sp->Area()<<endl;
        cout<<"Perimetter: "<<sp->Perimetter()<<endl;
    return 0;
}
