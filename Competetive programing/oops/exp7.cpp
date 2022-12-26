//Code for Inheritance (single) in opps
//sir, Why my code terminated  when
// I use string in derived class on the otherhand If I didn't use string ,The code  run properly.
#include<iostream>
#include<string>
using namespace std;
class Employee{
int salary;
int Id;
public:
void getdata(){}
void getdata(int x,int y){
    salary =x;
     Id =y;
}
void display_data(){
    cout<<" Id no "<<Id<<" have got the salary "<<salary;
}
};
class Programer : public Employee{
string Language[100];
int Incharge;
public:
void get_data(){}
void get_data(string p,int q){
    Language[100] =p;
     Incharge =q;
    
}
void Display_data(){
    cout<<" Is speclished in "<<Language[100]<<" also the incharge of lab no. "<<Incharge<<endl;
}
};
int main(){
Programer p1;
p1.getdata(54000,2869);
p1.get_data("java", 2);
p1.display_data();
p1.Display_data();

}