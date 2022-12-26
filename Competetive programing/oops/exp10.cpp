#include <iostream>
using namespace std;
class Matrix{
    int row;
    int column;
    int mat1[NULL][NULL];
    int mat2[NULL][NULL];
    int mat3[NULL][NULL];
public:
void setdata(int a,int b){
    row =a;
    column =b;
    mat1[a][b];
    mat2[a][b];
    mat3[a][b];

}
void setelement1(void){
    cout<<"Enter the elements of matrix :"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>mat1[i][j];
        }
    }
}
void setelement2(void){
    cout<<"Enter the elements of matrix 2:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>mat2[i][j];
        }
    }
}
void add(void){
     int mat1[row][column];
     int mat2[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            mat3[i][j]=mat1[i][j] + mat2[i][j];
        }
    }
}
void Displayadd(void){
    int mat3[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        cout<<mat3[i][j];
        }
    }
}
};
int main(){
Matrix m1,m2,m3;
m1.setdata(3,3);
m1.setelement1();
m2.setdata(3,3);
m2.setelement2();
m3.add();
m3.Displayadd();


}