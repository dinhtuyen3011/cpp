#include <iostream>
using namespace std;

class PublicAbstract {
public:
    PublicAbstract() { cout<<"PublicAbstract"<<endl; }
    virtual void doThings() =0;
};

class ProtectedAbstract {
protected:
    ProtectedAbstract() { cout<<"ProtectedAbstract"<<endl; }
public:
    virtual void doMoreThings() =0;
};

class B: public PublicAbstract {
public:
    void doThings() { }
};

class C: public ProtectedAbstract {
public:
    void doMoreThings() { }
};

int main() {
    B b;
    C c;
    return 0;
}

