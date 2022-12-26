/* Friends function is used to assess the private member outside 
the class. Although he is not member of that class.
Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the
   object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need 
   object_name.member_name to access any member.  */

#include <iostream>
using namespace std;
class bank{
int salary;
int credit;
public:
friend bank getter(bank o1);
void setsalary(void){
    cout<<"Enter the salary"<<endl;
    cin>>salary;
}
void setcredit(void){
    cout<<"Enter credit score"<<endl;
    cin>>credit;
}
};
 bank getter(bank o1){
    bank o2,o3;
    cout<<o2.salary<<endl;
    cout<<o3.credit<<endl;
}
int main(){
   bank p1,p2,e1,e2;
   cout<<"For 1st person"<<endl;
   p1.setsalary();
   p1.setcredit();
   cout<<"Another person"<<endl;
   p2.setsalary();
   p2.setcredit();
   e1 = getter(p1);
   e2 = getter(p2);

}    