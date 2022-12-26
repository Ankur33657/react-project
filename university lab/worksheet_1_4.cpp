//WAP to find area of rectangle using constructor overloading. Also define destructor to delete the memory allocated to objects.
// #include<iostream>
// using namespace std;
// class Triangle{
// int len;
// int bre;
// public:
// void area(){
// len=12;
// bre=10;
// cout<<"Default Construction is called"<<endl;
// cout<<"Length= "<<len<<" Breadth= "<<bre<<endl;
// cout<<"Area= "<<0.5*(len*bre)<<endl;
// }
// void area(int l,int b){
//     len=l;
//     bre=b;
//     cout<<"Parameterized Constructors is called "<<endl<<" Area= "<<0.5*(len*bre)<<endl;
// }
//     ~Triangle(){
//         cout<<"Distructor called"<<endl;
//     }
// };
// int main(){
// Triangle t1,t2;
// t1.area();
// t2.area(23,15);
// }

/*WAP to create database of the following items: Name of the student (String), Roll number of the student (int), Height of the student (cm), Weight of the student (kg/gms)
1) Create a Constructor to initialize values
2) Create display () function to display the details
3) Illustrate the use of copy constructor
4) Also implement the concept of destructor.*/
#include<iostream>
#include<string.h>
using namespace std;
class database{
string Name;
int Roll_no;
int Height;
int Weight;
public:
void getter(string name,int roll,int height,int weight){
    cout<<"Constructor is called:"<<endl;
    Name=name;
    Roll_no=roll;
    Height=height;
    Weight=weight;
}
void display(void){
    cout<<"Display function is called:"<<endl;
cout<<"The details of the Student is: "<<endl<<"Name- "<<Name<<endl<<"Roll no-"<<Roll_no<<endl<<"Height(cm)- "<<Height<<endl<<"Weight(kg)"<<Weight<<endl;
}
~database(){
    cout<<"Distructor is called:"<<endl;
}

};
int main(){
database d1,d2;
d1.getter("Ankur_singh",2869,169,75);
d1.display();
cout<<"Using copy Constructor"<<endl;
d2=d1;
d2.display();

} 
