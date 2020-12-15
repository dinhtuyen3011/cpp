#include <iostream>
using namespace std;

#define US 0
#define ENGLAND 1
#define NETHERLANDS 2
#define CURRENCY ENGLAND

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
/* Output */
Chosen Currency: Dollar
Chosen Location: 0

