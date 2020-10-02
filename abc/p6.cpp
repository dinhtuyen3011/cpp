#include <iostream>
using namespace std;
class Shape
{
protected:
    int width;
    int height;
public:
    Shape(int wid,int heig): width(wid),height(heig){cout<<"[Constructor Shape] "<<"Width: "<<width<<"height: "<<height<<endl;};
    virtual ~Shape(){cout<<"[Destructor Shape]"<<width<<height<<endl;};
    virtual float getArea() =0;
    
};
class Rectangle:public Shape
{
private:
    
public:
    Rectangle(int width, int height): Shape(width ,height){cout<<"[Constructor Rectangle] "<<"Width: "<<width<<"height: "<<height<<endl;};
    ~Rectangle(){
        cout<<"[Destructor Rectangle]"<<width<<height<<endl;
    };
    float getArea(){
        return width*height;
    }
    
};
int main(){
    int wid,heig;
    
    
    cout<<"->Width: ";cin>>wid;
    cout<<"->height: ";cin>>heig;
    Shape *s=new Rectangle(wid,heig);
    cout<<"->Area "<<s->getArea()<<endl;
    delete s;
}