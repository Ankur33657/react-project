#include <iostream>
#include<math.h>
using namespace std;
bool triplet(int x, int y, int w){
    if((pow(x,2))==((pow(y,2))+(pow(w,2)))){
     return true;
    }
    return false;
}
int main(){
    int a,b,c,z;
    cin>>a>>b>>c;
    int flag=0;
    z=max(a,max(b,c));
    if(z==a){
      if(triplet(a,b,c)){
          cout<<"It is treplete";
          flag=1;
      }
    }
    else if(z==b){
     if(triplet(b,a,c)){
          cout<<"It is treplete";
          flag=1;
      }
    }
    else
     if(triplet(c,a,b)){
          cout<<"It is treplete";
          flag=1;
      }
      if(flag==0){
          cout<<"Not a pythagorous tripalate"<<endl;
      }

}