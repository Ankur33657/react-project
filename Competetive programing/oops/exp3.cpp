/* Addition of complex numbers and their substraction also
 in another word passing objects as a arguments */

#include <iostream>
using namespace std;
class complex{
int a;
int b;
int c,d;
public:
void setter(int x,int y){
    a=x;
    b=y;
}
void calculation(complex o1, complex o2){
    a=o1.a + o2.a;
    b=o1.b + o2.b;
}
void getter(void){
    cout<<"The complex no. is "<<a<<" +"<<b<<"i"<<endl;
}
void setter1(int v1,int v2){
    c=v1;
    d=v2;
}
void calculation1(complex o1, complex o2){
    c=o1.c - o2.c;
    d=o1.d - o2.d;
}
void getter1(void){
    cout<<"The complex no. is "<<c<<" -"<<d<<"i"<<endl;
}
};
int main(){
 complex c1,c2,c3;
 c1.setter(2,5);
 c1.setter1(2,5);
 c1.getter();
 c2.setter(4,9);
 c2.setter1(4,9);
 c2.getter();
 c3.calculation(c1,c2);
 cout<<"The sum of two complex number is "<<endl;
 c3.getter();
 c3.calculation1(c1,c2);
 cout<<"The difference of two complex number is "<<endl;
 c3.getter1();
}
