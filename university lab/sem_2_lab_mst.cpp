/*1) Write a program to find the largest& smallest of five no numbers . (Use inline function MAX in outtre class and MIN in inner class)



2) A dining hall can accommodate only 50 guests. Create a class to store seat number (Generated Automatically) and name of the guests who are seated on first come first seated basis. Define functions to display name of all guests along with seat number. Write a program to show the working of this class using the concept of static data member and static function   where seat o info will come from inner class and reset all in outer class .*/ 

/*#include<iostream>
using namespace std;
class cal{
    public:
    inline int Min(int a,int b,int c,int d,int e){
    return  (a<b && a<c && a<d && a<e) ?a :(b<c && b<d && b<e) ?b :(c<d && c<e)? c :(d<e)?d:e;
    }
   inline int Max(int a,int b,int c,int d,int e);
};
int cal :: Max(int a,int b,int c,int d,int e){
return  (a>b && a>c && a>d && a>e) ?a :(b>c && b>d && b>e) ?b :(c>d && c>e)? c :(d>e)?d:e;
}
int main(){
int x,y,z,w,v;
cout<<"Enter 5 number"<<endl;
cin>>x>>y>>z>>w>>v;
cal oj1;

cout<<"The maximum of 5 numbers is "<<oj1.Max(x,y,z,w,v)<<endl;
cout<<"The minumum of 5 numbers is "<<oj1.Min(x,y,z,w,v)<<endl;
cout<<"Name- MD Khalid"<<endl<<"UID-21BCS1461"<<endl;
}*/
 
#include<iostream>
using namespace std;
class guest{
    string name;
    static int seat_no;
    public:
    void putter(void){
       cout<<"Enter your name"<<endl;
       cin>>name;
       if(seat_no>=50){
           cout<<"Hall is full"<<endl;
       }
    }
    static void count(void){
       seat_no ++;
       cout<<"Seat no alloted is s"<<seat_no<<endl;
    }
    void getter(void);
};
    void guest :: getter(void){
        cout<<"Guest "<<name<<" is sitted on s"<<seat_no<<endl;
    }
int guest::seat_no=0; 
int main(){
guest g1,g2,g3,g4;
g1.putter();
g2.putter();
g3.putter();
g4.putter();
cout<<"_________________________________________________"<<endl;
guest::count();
g1.getter();
guest::count();
g2.getter();
guest::count();
g3.getter();
guest::count();
g4.getter();
cout<<"Name-MD Khalid"<<endl<<"UID-21BCS1461"<<endl;
}