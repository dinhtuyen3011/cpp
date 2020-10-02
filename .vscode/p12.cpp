#include <iostream>
using namespace std;
template <class T>
class myIncrement{
    private:
    T value;
    public:
    myIncrement(T val){value= val;}
    T toIncrement(){return ++value;}
};
template <>
class myIncrement<char>
{
private:
    char c;
public:
    myIncrement(char x){c=x;}
    char change(){
        if((c>='a')&&(c<='z')){
            c+='A'-'a';
        }
        return c;
    }
};
template<typename T>
T summation(T val) {
  return val;
}

template <typename T, typename... Args>
T summation(T sum,Args ... args){
    return sum+summation(args ...);
}
int main(){
    myIncrement<int> x(10);
    myIncrement<char> c1('a');
    cout<<c1.change();
    cout<<x.toIncrement();
    int a=1,b=2,c=3;
    int sum1=summation(a,b,c);
    cout<<sum1;
}