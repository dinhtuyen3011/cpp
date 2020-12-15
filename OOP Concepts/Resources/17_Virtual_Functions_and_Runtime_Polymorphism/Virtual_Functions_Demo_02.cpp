/* Let's try to implement our Loader class */
#include <iostream>
using namespace std;
class Weapon {
   public:
   Weapon() { cout << "1.Loading weapon features.\n"; }
   virtual void features() { cout << "2.Loading weapon features.\n"; }
};
class Bomb : public Weapon {
   public:
   void features() {
      this->Weapon::features();
      cout << "Loading bomb features.\n";
   }
};
class Gun : public Weapon {
   public:
   void features() {
      this->Weapon::features();
      cout << "Loading gun features.\n";
   }
};
class Loader {
   public:
   void loadFeatures(Weapon *weapon) {
      weapon->features();
   }
};
int i=0;
void add()
{
	cout<<i<<endl;
	i++;
	}
int main() {
   
   add();
   Loader *l = new Loader;add();
   Weapon *w;add();
   Bomb b;add();
   Gun g;add();
   
   //w = &b;
   w = new Bomb();add();
   l->loadFeatures(w);add();
   
   w = &g;add();
   l->loadFeatures(w);add();
   
   return 0;
}
/* Output *//*
Loading weapon features.
Loading weapon features. 
Loading weapon features.
Loading weapon features. 
*/
