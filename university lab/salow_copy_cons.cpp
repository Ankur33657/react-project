#include<iostream>
using namespace std;
class cu{
    int uid;
    int fee;
    int course_id;
    public:
    void setter(int x,int y,int z){
        uid=x;
        fee=y;
        course_id=z;
    }
    void getter(){
      cout<<"UID= "<<uid<<endl<<"Fee= "<<fee<<endl<<"Course ID= "<<course_id<<endl;
      cout<<"---------------------------------------------------"<<endl;
    } 
};
int main(){
    cu c1,c2;
    c1.setter(2869,45000,103);
    c1.getter();
    cu c3=c1;
    c3.getter();
    c2=c3;
    c2.getter();
}