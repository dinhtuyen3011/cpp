#include <iostream>
using namespace std;
class Animal{
	public:
		int legs;
		int eyes;
};

class Dog : public Animal {
	public:
		int tail;
};

int main() {
	//1. Khai bao bien doi tuong Dog
	Dog obja, *objb;
	
	//2. Thiet lap thong tin 
	obja.legs = 4;
	obja.eyes = 2;
	obja.tail = 2;
	
	//3. Hien thin thong tin
	cout<<"--- Dog ---"<<endl;
	cout<<"- Legs: "<< obja.legs <<endl;
	cout<<"- Eyes: "<< obja.eyes <<endl;
	cout<<"- Tail: "<< obja.tail <<endl;
	
	//4. Thiet lap dia chi cho bien con tro
	objb = &obja;
	
	//5. Hien thi thong tin doi tuong cua bien con tro
	cout<<"--- Dog (pointer) ---"<<endl;
	cout<<"- Legs: "<< objb->legs <<endl;
	cout<<"- Eyes: "<< objb->eyes <<endl;
	cout<<"- Tail: "<< objb->tail <<endl;
		
	return 0;
}
/* Output *//*
--- Dog ---
- Legs: 4
- Eyes: 2
- Tail: 2
--- Dog (pointer) ---
- Legs: 4
- Eyes: 2
- Tail: 2
*/