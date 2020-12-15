#include <iostream>
#include <string>
using namespace std;
 
class Foo{
public:
  float f(string str){
    std::cout<<"Foo::f()"<<std::endl;     
    return 7.5;   
  }
};
 
int main(int argc, char* argv[]){
  float (Foo::*fptr) (string) = &Foo::f;
  Foo obj;
  cout<<(obj.*fptr)("str")<<endl;//call: Foo::f() through an object
  Foo* p=&obj;
  (p->*fptr)("str");//call: Foo::f() through a pointer
}
