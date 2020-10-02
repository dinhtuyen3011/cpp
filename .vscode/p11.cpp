#include <iostream>
using namespace std;
#define US 10
#define ENGLAND 20
#define NETHERLANDS 30
#define CURRENCY US
int main(){
    #if CURRENCY==US
     char ptr[]={"Dollar"};
    #define CHOOSEN US
    #elif CURRNCY ==ENGLAND
        char ptr[]={"Pound"};
        #define CHOOSEN ENGLAND
    #elif
        char ptr[]={"Euro"};
        #define CHOOSEN NETHERLANDS
    #else
        char ptr[]={"Euro"};
    #endif
    #ifndef CHOOSEN
    cout<<"using default currency"<<ptr[];
    #else
    cout<<"Choose location "<<CHOOSEN<<endl;
    cout<<"Choo currency "<<ptr;
    #endif
}