#include <iostream>
using namespace std;

class Game
{
   int g;
   public:
       Game()
       {
          g = 100;
       }
       void show()
       {
          cout <<g;
       }
};

class Anim: public Game
{
   int k;
   public:
       Anim()
       {
          k = 200;
       }
       void show()
       {
          cout <<k;
       }
};
int main() {
   Anim a;
   a.show();
   return 0;
}
/* Output */
// 200
