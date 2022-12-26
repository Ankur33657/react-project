#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter size of row and column"<<endl;
    cin>>r>>c;
    int mat[r][c];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    int a=0;
    int *ptr= mat[c];
    cout<<"The address of element stored in matrix are: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<ptr<<" ";
            ptr++;
            a++;
        }
        cout<<endl;
    }
    cout<<"If base address is 1000 then address stored at mat[r-1][c-1] is: "<<1000+(a*sizeof(int))<<endl;
    cout<<"Name- Ankur Singh "<<endl<<"UID- 21BCS2869"<<endl;
}