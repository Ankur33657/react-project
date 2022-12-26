#include <iostream>
using namespace std;
class Employee{
    string Name;
    int Age;
    string Designation;
    double Salary;
    public:
    void getter(void){
        cout<<"Name"<<endl;
        cin>>Name;
        cout<<"Age"<<endl;
        cin>>Age;
        cout<<"Designation"<<endl;
        cin>>Designation;
        cout<<"Salary"<<endl;
        cin>>Salary;
    }
    void putter(void){
        cout<<"_____________________________________________________________________"<<endl;
        cout<<"Name- "<<Name<<endl<<"Age- "<<Age<<endl
        <<"Designation- "<<Designation<<endl<<"Salary- "<<Salary<<endl; 
        cout<<"--------------------------------------------------------------------"<<endl;
    }

};
int main(){
       Employee E1,E2;
       E1.getter();
       E2.getter();
       E1.putter();
       E2.putter();
       cout<<"Name- Ankur Singh"<<endl<<"UID-21BCS2869"<<endl;
}