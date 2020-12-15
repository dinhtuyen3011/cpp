#include <iostream>
using namespace std;

#define US 0
#define ENGLAND 1
#define NETHERLANDS 2
<<<<<<< HEAD
<<<<<<< HEAD
#define CURRENCY 0
#define CURRENCY US
=======
#define CURRENCY 1
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
=======
<<<<<<< HEAD
#define CURRENCY 0
<<<<<<< HEAD
<<<<<<< HEAD
=======
#define CURRENCY US

>>>>>>> 671e9657476f9e993aa0b27088391756f86bd7f2
=======
#define CURRENCY 1
>>>>>>> 66ba76b5f6981f2ded1587e014884872f636508b
=======
#define CURRENCY US
=======
#define CURRENCY 1
>>>>>>> 8e1c65d51b664efeaa959acce0b4a6cbc6823e62
>>>>>>> a695c5dd2338f8e4f8013b7e8d4eb872b533366d
=======
=======
#define CURRENCY 1
>>>>>>> 24b62934642db73a829709f0e531653528ebdd8f
=======
#define CURRENCY 1
>>>>>>> 24b62934642db73a829709f0e531653528ebdd8f
>>>>>>> dev02
>>>>>>> master

int main()
{
	#if CURRENCY == US
		char acurrency[] = {"Dollar"};
		#define CHOSEN US
	#elif CURRENCY == ENGLAND
		char acurrency[] = { "Pound" };
		#define CHOSEN ENGLAND
	#elif CURRENCY == NETHERLANDS
		char acurrency[] = { "Euro" };
		#define CHOSEN NETHERLANDS
	#else
		char acurrency[] = {"Euro"};
	#endif

	// If CHOSEN is not defined, then we get default.
	#ifndef CHOSEN
		cout << endl << "Using Default Currency " << acurrency;
	#else
		cout <<"Chosen Currency: " << acurrency <<endl;
		cout <<"Chosen Location: " << CHOSEN <<endl;
	#endif
}
/* Output *//*
Chosen Currency: Pound
Chosen Location: 1  
*/
