//Tranposition of matrix .
#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the order of matrix A:"<<endl;
    cin>>r>>c;
    cout<<"Enter the elements"<<endl;
    int m1[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cin>>m1[i][j];
    }
    //For transposition of matrix
    for(int i=0;i<r;i++){
        for(int j=i;j<c;j++){
            //swap of number
            int temp = m1[i][j];
             m1[i][j] = m1[j][i];
             m1[j][i] = temp;
        }
    }
    // printing the transposition matrix..
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
}