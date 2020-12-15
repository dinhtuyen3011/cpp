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
// template <>
// class myIncrement <char> {
//   char value;
//   public:
//    myIncrement (char arg) {value=arg;}
//    char uppercase ()
//    {
//      if ((value>='a')&&(value<='z'))
//         value+='A'-'a';
//      return value;
//    }
// };

template <>
class myIncrement <char>
{
  char value;
  public:
  myIncrement(char temp)
  {
    value = temp;
  }
  char uppercase()
  {
    if(value >= 'a' && value <= 'z')
      value+= 'A'-'a';
    return value;
  }
};

int main () {
  myIncrement<int> myint (7);
  myIncrement<char> mychar ('b');
  myIncrement<double> mydouble(11.0);

  cout<<"Incremented int value: "<< myint.toIncrement()<< endl;  
  cout<<"Incremented double value: "<<mydouble.toIncrement()<< endl;
  cout<<"Uppercase char value: "<<mychar.uppercase()<< endl;
  return 0;
}
/* Output *//*
Incremented int value: 8
Incremented double value: 12
Uppercase char value: A
*/
