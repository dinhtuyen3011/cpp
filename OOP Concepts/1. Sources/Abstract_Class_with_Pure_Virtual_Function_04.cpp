// const member function in C++ program
#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Shape {
   protected:
      int width;
      int height;
   public:
      Shape(int width, int height){
          this->width = width;
          this->height = height;
      }
      // pure virtual function
      virtual float Area() = 0;
      virtual float Perimetter() = 0;

      int getWidth(){
          return width;
      }

      void setWidth(int w) {
         width = w;
      }
      
      int getHeight(){
          return height;
      }
      void setHeight(int h) {
         height = h;
      }    
};
// Derived classes
class Rectangle: public Shape {  
   public:
      Rectangle(int width, int height) 
            : Shape(width, height){}
      float Area() {
         return (width * height); 
      }
      float Perimetter(){
         return (width + height)*2;
      }
};
// Derived classes
class Triangle: public Shape {
   protected:
      int orther;
   public:
      Triangle(int width, int height, int orther) 
            : Shape(width, height){
         this->orther = orther;
      }
      float Area() { 
         return (width * height)/2; 
      }
      float Perimetter(){
         return (width + height)*2;
      }
};
// Derived classes
class Circle : public Shape{
      protected:
            int radius;
      public:
      Circle(int width, int height, int radius) 
            : Shape(width, height){
         this->radius = radius;
      }
      float Area() { 
         return (width * height)/2; 
      }
      float Perimetter(){
         return (radius * radius)*2;
      }
};

int main()
{
      Shape *sp;
      int opt;
      cout<<"0-Rectangle, 1-Triangle and 2-Circle?"<<endl;
      cin>>opt;
      switch(opt){
          case 0: sp = new Rectangle(6,8); break;
          case 2: sp = new Circle(6,8,10);break;
      }
      cout<<"- Area: "<<sp->Area()<<endl;
      cout<<"- Perimetter: "<<sp->Perimetter()<<endl;             
      return 0;
}
/* Output */

