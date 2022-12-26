#include <stdio.h>
int main(){
    int arr[3][3],arr2[3][3];
    int i,j;
    printf(" Enter the elements of matrix A ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d ",&arr[i][j]);
        }
        printf("\n");
        }
    printf("Enter the elements of matrix B ");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&arr2[i][j]);
    }
    printf("\n");
    }
printf(" The resultant of two matrix is:  ");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
    arr[i][j] = arr[i][j] +arr2[i][j];
    printf("%d ",arr[i][j]);
}
printf("\n");
}
}