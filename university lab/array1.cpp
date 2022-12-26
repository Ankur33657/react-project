#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the number of rows and column"<<endl;
    cin>>r>>c;
    int arr1[r][c],arr2[r][c];
    cout<<"enter the elements of matrix 1"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the elements of matrix 2:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"The resultant matrix is: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr1[i][j] + arr2[i][j]<<"\t";
        }
        cout<<endl;
    }
}