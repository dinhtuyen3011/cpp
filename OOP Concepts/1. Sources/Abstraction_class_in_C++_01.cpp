#include <iostream>
using namespace std;
//Abstract class in c++ (pure virtual function)
class Shape {
   public:
      //Pure virtual function is declared
	  virtual int Area() = 0;
      
	  //Member Function to set width.
      void setWidth(int w) {
         width = w;
      }
      
      //Member Function to set height.
      void setHeight(int h) {
         height = h;
      }	     
   protected:
      int width;
      int height;
};

// A rectangle is a shape; it inherits shape.
class Rectangle : public Shape {
   public:
      // The implementation for Area is specific to a rectangle.
      int Area() { 
         return (width * height); 
      }
};

// A triangle is a shape too; it inherits shape.
class Triangle: public Shape {
   public:
      // Triangle uses the same Area function but implements it to
      // return the area of a triangle.
      int Area() { 
         return (width * height)/2; 
      }
};

int main() {
  Rectangle R;
  Triangle T;

  R.setWidth(5);
  R.setHeight(10);

  T.setWidth(20);
  T.setHeight(8);

  cout << "The area of the rectangle is: " << R.Area() << endl;
  cout << "The area of the triangle is: " << T.Area() << endl;
}

