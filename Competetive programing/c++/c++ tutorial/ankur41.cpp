// Multiplication of matrix
#include <iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter the order of matrix A:"<<endl;
    cin>>r1>>c1;
    cout<<"enter the element"<<endl;
    int m1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++)
        cin>>m1[i][j];
    }
    cout<<"Enter the order of matrix B"<<endl;
    cin>>r2>>c2;
      cout<<"enter the element"<<endl;
    int m2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++)
        cin>>m2[i][j];
    }
    if(c1=r2){
        cout<<"Multiplication possible"<<endl;
    }
    else{
    cout<<"Multiplication not possible"<<endl;
    }
      int m3[c1][r2];
      for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++)
         m3[i][j]=0;
      }
    // Multiplication of matrix
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<r2;k++){
                m3[i][j] += m1[i][k]* m2[k][j];
            }
        }
    }
    // printing the matrix
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<m3[i][j]<<" ";
        }

        cout<<endl;
    }
   

}