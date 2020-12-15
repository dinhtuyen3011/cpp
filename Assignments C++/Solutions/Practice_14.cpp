/*C++ program to enter student marks and find percentage and grade
Write a C++ program to input marks of five subjects Physics, Chemistry, Biology, 
Mathematics and Computer, calculate percentage and grade according to given conditions:
If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40%  : Grade F

Example
Input
Input marks of five subjects: 95
95
97
98
90
Output

Percentage = 95.00 
Grade A

Logic to calculate percentage and grade
Step by step descriptive logic to find percentage and grade.

Input marks of five subjects in some variable say phy, chem, bio, math and comp.
Calculate percentage using formula per = (phy + chem + bio + math + comp) / 5.0;.
Carefully notice I have divided sum with 5.0, instead of 5 to avoid integer division.
On the basis of per find grade of the student.
Check if(per >= 90) then, print "Grade A".
If per is not more than 90, then check remaining conditions mentioned and print grade.

Program to find percentage and grade
/**
 * C++ program to enter marks of five subjects and find percentage and grade
 */
#include <iostream>
using namespace std;
int main() {
    int phy, chem, bio, math, comp; 
    float per; 

    /* Input marks of five subjects from user */
    cout<<"Enter five subjects marks: ";
    cin>>phy>>chem>>bio>>math>>comp;

    /* Calculate percentage */
    per = (phy + chem + bio + math + comp) / 5.0;
    cout<<"Percentage = "<<per<<endl;

    /* Find grade according to the percentage */
    if(per >= 90)    
      cout<<"Grade A"<<endl;   
    else if(per >= 80)    
       cout<<"Grade B"<<endl;    
    else if(per >= 70)    
       cout<<"Grade C"<<endl;    
    else if(per >= 60)    
       cout<<"Grade D"<<endl;    
    else if(per >= 40)    
       cout<<"Grade E"<<endl;    
    else    
       cout<<"Grade F"<<endl;              
    return 0;
}