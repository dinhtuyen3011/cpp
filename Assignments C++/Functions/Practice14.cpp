#include <iostream>
using namespace std;
//function protype
string check_grade(int,int,int,int,int);

int main() {
    int phy, chem, bio, math, comp; 
    float per; 

    /* Input marks of five subjects from user */
    cout<<"Enter five subjects marks: ";
    cin>>phy>>chem>>bio>>math>>comp;
    cout<<check_grade(phy, chem, bio, math, comp);                  
    return 0;
}

string check_grade(int phy, int chem, int bio, int math, int comp){
    /* Calculate percentage */
    float per = (phy + chem + bio + math + comp) / 5.0;    

    /* Find grade according to the percentage */    
    if(per >= 90)    
      return "Grade A";   
    else if(per >= 80)    
       return "Grade B";    
    else if(per >= 70)    
       return "Grade C";    
    else if(per >= 60)    
       return "Grade D";    
    else if(per >= 40)    
       return "Grade E";    
    return "Grade F";
}