#include <iostream>
#include <string>
using namespace std;

// 1. class template:
template <class T>
class myIncrement {
  T value;
  public:
  myIncrement (T arg) {value=arg;}
  T toIncrement () {return ++value;}
};

// 2. class template specialization:
template <>
class myIncrement <char> {
  char value;
  public:
   myIncrement (char arg) {value=arg;}
   char uppercase ()
   {
     if ((value>='a')&&(value<='z'))
        value+='A'-'a';
     return value;
   }
};

// 3. class template specialization:
template <>
class myIncrement <float> {
  float value;
  public:
   myIncrement (float arg) {value=arg;}
   float ConvertTo()
   {
     return value + 8.5;
   }
};

int main () {
  myIncrement<int> myint (7);
  myIncrement<char> mychar ('a');
  myIncrement<double> mydouble(11.0);
  myIncrement<float> myfloat(7.7);

  cout<<"Incremented int value: "<< myint.toIncrement()<< endl;
  cout<<"Incremented double value: "<<mydouble.toIncrement()<< endl;
  cout<<"Uppercase char value: "<<mychar.uppercase()<< endl;
  cout<<"Convert value to float: "<<myfloat.ConvertTo()<< endl;

  return 0;
}
/* Output *//*
Incremented int value: 8
Incremented double value: 12
Uppercase char value: A
Convert value to float: 16.2
*/
