//To check if the triangles are isosclace, equilateral and sclance...
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter all the size of side of a triangle"<<endl;
    cin>>a>>b>>c;
    if(a==b){
        if(b==c){
            cout<<"Equilateral triangle"<<endl;
        }
        else
        cout<<"Isosclance triangle"<<endl;
    }
    else{
        if(b==c){
            cout<<"Isosclance"<<endl;
        }
        else
        cout<<"Sclance triangle"<<endl;
    }
}