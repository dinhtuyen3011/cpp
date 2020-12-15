/* An Example to Begin With
Let us assume, we are working on a game (weapons specifically).
We created the Weapon class and derived two classes Bomb and Gun to load features of respective weapons.*/
#include <iostream>
using namespace std;

class Weapon {
   public:
   void loadFeatures() { cout << "Loading weapon features.\n"; }
};

class Bomb : public Weapon {
   public:
   void loadFeatures() { cout << "Loading bomb features.\n"; }
};

class Gun : public Weapon {
   public:
   void loadFeatures() { cout << "Loading gun features.\n"; }
};

int main() {
   Weapon *w = new Weapon;
   Bomb *b = new Bomb;
   Gun *g = new Gun;

   w->loadFeatures();
   b->loadFeatures();
   g->loadFeatures();

   return 0;
}
/* Output *//*
Loading weapon features.
Loading bomb features.
Loading gun features.
*/
