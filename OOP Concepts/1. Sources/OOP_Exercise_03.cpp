#include <iostream>
using namespace std;

class Student{

	public:
	string fname;
	int mark1;int mark2;

	Student(string na, int ma1,int ma2){
		fname=na;mark1=ma1;mark2=ma2;
	}

	float calc_media(){return (mark1+mark2)/2;}

	void disp(){
		cout << "Student:" << fname << " \n Media:"<< calc_media() <<"\n";
	}
};

int main(){

	string fname;int m1,m2;
	cout << "Enter name:";
	cin>> fname;
	cout << "Enter marks of two subjects:";
	cin>> m1;
	cin>> m2;
	Student stdu(fname,m1,m2);
	stdu.disp();

	return 0;
}
/* Output *//*
// Enter name: Doannv
// Enter marks of two subjects: 10 20
// Student: Doannv
// Media: 15
*/
