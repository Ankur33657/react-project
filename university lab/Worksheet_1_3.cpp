//Write a program to find the largest& smallest of three numbers. (Use inline function MAX and MIN)
// #include<iostream>
// using namespace std;
// inline int MAX(int a,int b,int c){
//     return (a>b && a>c ?a:(b>c ? b:c));
// }
// inline int MIN(int x,int y,int z){
//     return x<y ?(x<z ? x:z):(y<z ? y:z);
// }

// int main(){
// int i,j,k;
// cout<<"Enter the numbers"<<endl;
// cin>>i>>j>>k;
// cout<<"Max of three numbers is "<<MAX(i,j,k)<<endl;
// cout<<"Minimum of three numbers is "<<MIN(i,j,k)<<endl;
// cout<<"Name-Ankur Singh"<<endl<<"UID-21BCS2869"<<endl;
// }

//A dining hall can accommodate only 50 guests. Create a class to store seat number (Generated Automatically) and name of the guests who are seated on first come first seated basis. Define functions to display name of all guests along with seat number. Write a program to show the working of this class using the concept of static data member and static function    
// #include<iostream>
// using namespace std;
// class guest{
//     string name;
//     static int seat_no;
//     public:
//     void putter(void){
//        cout<<"Enter your name"<<endl;
//        cin>>name;
//        if(seat_no>50){
//            cout<<"Hall is full"<<endl;
//        }
//     }
//     static void count(void){
//        seat_no ++;
//        cout<<"Seat no alloted is s"<<seat_no<<endl;
     
//     }
//     void getter(void){
//         cout<<"Guest "<<name<<" is sitted on s"<<seat_no<<endl;
//     }
// };
// int guest::seat_no=0; 
// int main(){
// guest g1,g2,g3,g4;
// g1.putter();
// g2.putter();
// g3.putter();
// g4.putter();
// cout<<"_________________________________________________"<<endl;
// guest::count();
// g1.getter();
// guest::count();
// g2.getter();
// guest::count();
// g3.getter();
// guest::count();
// g4.getter();
// cout<<"----------------------------------------------"<<endl;
// cout<<"Name-Ankur Singh"<<endl<<"UID-21BCS2869"<<endl;
// }
 //WAP to swap private data members of classes named as class_1, class_2 using friend function.

#include<iostream>
using namespace std;
//#include<conio.h>
class class_2;
class class_1
{ 
 int value1;
 public: 
 void indata(int a) 
 { 
  value1=a; 
 } 
 void display(void) 
 { 
  cout<<value1<<"\n"; 
 } 
 friend void exchange(class_1 &, class_2 &);
};
class class_2
{ 
 int value2;
 public: 
 void indata(int a) 
 { 
   value2=a; 
 } 
 void display(void) 
 { 
  cout<<value2<<"\n"; 
 } 
 friend void exchange(class_1 &, class_2 &);
};
void exchange(class_1 &x, class_2 &y)
{ 
 int temp = x.value1; 
 x.value1 = y.value2; 
 y.value2 = temp;
}
int main()
{ 
 class_1 C1; 
 class_2 C2;
 C1.indata(100); 
 C2.indata(200); 
 cout<<"Values before exchange"<<"\n";
 C1.display(); 
 C2.display(); 
 exchange(C1, C2); 
 cout<<"Values after exchange"<<"\n"; 
 C1.display(); 
 C2.display(); 
 cout<<"Name-Ankur Singh"<<endl<<"UID-21BCS2869"<<endl;
} 
 
 
