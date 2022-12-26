// Note-Rows and column are same
#include <stdio.h>
int main(){
    int n;
printf("Enter Size of sq. matrix:");
scanf("%d",&n);
int mat1[n][n];
int *ptr1=&mat1[0][0];
printf("\nEnter the elements of matrix 1:\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",ptr1);
        ptr1++;
    }
}
 ptr1=(ptr1-(n*n));
int mat2[n][n];
int *ptr2=&mat2[0][0];
printf("\nEnter the elements of matrix 2:\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",ptr2);
        ptr2++;
    }
}
 ptr2=(ptr2-(n*n));
 int a;
//Addition of two numbers:
printf("\nAdditions of two matrix are:\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        a =((*ptr1) +(*ptr2));
        ptr1++;
        ptr2++;
        printf("%d ",a);
    }
    printf("\n");
}


}