/*wap program for student fee and  also mention the fine i.e 1000 rupes print all this using single inheritance with their member fuctions ...*/
#include<iostream>
using namespace std;
class Student_fee{
    int fee;
    public:
    void getter(int x){
        fee=x;
    }
    void putter(void){
        cout<<"The fee of student is "<<fee<<endl;
    }
};
    class fine : public Student_fee {
    int fine;
    public:
    void applied(int x){
        if(x=0){
            fine = 0;
        }
        else
        fine =1000;
    }
    void imposed(void){
        cout<<"Fine is "<<fine<<endl;
    
    }
    };

int main(){
fine f1;
f1.getter(90000);
f1.applied(1);
f1.putter();
f1.imposed();
}