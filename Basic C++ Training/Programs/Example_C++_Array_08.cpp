#include <iostream>
using namespace std;

#define X 10
//---------------------------------------------------------------------------
void outputFunc(int array[]);

int testFunc(int array[]);

void inputFunc(int array[]);

int main()
{  
   int array[X];

   inputFunc(array);

   outputFunc(array);

   system("pause");
   return 0;
}
//---------------------------------------------------------------------------
void inputFunc(int array[])
{  cout << "Please enter " << X << " integer elements of an array.\n" << endl;
   for(int count = 0; count < X; ++count)
   {  cout << "array[" << count << "]: ";
      while(! (cin >> array[count]) )
      {  cout << "\n\tSorry, invalid input... was expecting an integer."
              << "  Please try again:\n" << endl;
         cin.clear();
         cin.ignore(10000, '\n');
         cout << "array[" << count << "]: ";
      }
      fflush(stdin);
   }
}

int testFunc(int array[])
{  int count = 0;

   for(int i = 0; i < X; ++i)
      if(array[i] >= 10)
         ++count;

   return count;
}

void outputFunc(int array[])
{  cout << "\n\tYou entered " << testFunc(array) << " integers greater than or equal to"
        << " 10.\n" << endl;
}
