// programing in which calculating the distance between two points....using construction 
#include<iostream>
#include<math.h>
using namespace std;
class point{
int x,y;
public:
 void setdata(int a,int b){
     x=a;
     y=b;
 }
 void distance(point o1, point o2){
    point o3;
    int c = pow((o2.y - o1.y),2);
    int d = pow((o2.x - o1.x),2);
    double z = sqrt((c+d));
    cout<<"The distance between the two coordinates is:"<<endl;
    cout<<z<<endl;
 }
};
int main(){
    int g,h,i,j;
    cout<<"Enter the cordinate of point A"<<endl;
    cin>>g>>h;
    cout<<"Enter the cordinate of point B"<<endl;
    cin>>i>>j;
    point v,w,t;
    v.setdata(g,h);
    w.setdata(i,j);
    t.distance(v,w);
}
