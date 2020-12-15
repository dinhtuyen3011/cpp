/*
- Why would one use nested classes in C++?
  -> Nested classes for hiding implementation details.
*/
#include<iostream>
using namespace std;

class A {
   private:
   class B
   {
      private:
         int num;
      public:
<<<<<<< HEAD

=======
>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304
         void getdata(int n) {
            num = n;
         }
         void putdata() {
            cout<<"The number is "<<num;
         }
   }b;
   public:
<<<<<<< HEAD
=======

>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304
      void display(int a){
         b.getdata(a);
         b.putdata();
      }
<<<<<<< HEAD
=======

   void display()
   {
>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304

   void display(){
      b.getdata(10);
      b.putdata();
<<<<<<< HEAD
      }
};


int main()
{
=======
   }

<<<<<<< HEAD
int main() {
=======
      void getdata(int n) {
         num = n;
      }
      void putdata() {
         cout<<"The number is "<<num;
      }
   };
    B b;
   public:
<<<<<<< HEAD
      void display(){
         
         b.getdata(10);
         b.putdata();
         }
      };
int main() {
=======
<<<<<<< HEAD
   void display(){
   		b.getdata(10);
   		b.putdata();
=======
   void display()
   {
    b.getdata(10);
    b.putdata();
>>>>>>> 1a6d74e6d3f81020b341c608a31ff60676d0d89b
   }
=======
>>>>>>> dev04
};

int main()
{
<<<<<<< HEAD
>>>>>>> dev04
>>>>>>> master
=======
>>>>>>> dev04
>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304
   cout<<"Nested classes in C++"<< endl;
   A a;
<<<<<<< HEAD
   //A::B obj;
   a.display(20);
   cout<<endl;
   a.display();
   
   //a.putdata();

   //a.putdata();
   //obj.putdata();
=======
   a.display(10);
   a.display();
>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304
   return 0;
}
/* Output *//*
Nested classes in C++
The number is 10
*/
