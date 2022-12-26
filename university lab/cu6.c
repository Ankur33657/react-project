#include <stdio.h>
int main()
{
    int r, c;
    printf("For 1st matrix:\n");
    printf("Enter\n Row:");
    scanf("%d", &r);
    printf("Column:");
    scanf("%d", &c);
    int arr1[r][c];
    printf("Enter the elements");

    for(int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("For 2nd matrix:\n");
    
    printf("Enter the elements");
    int arr2[r][c];
     int k1[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\n Displaying the matrix \n");
    printf("1st matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("2nd matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    int sum[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("Additions\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    int dif[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            dif[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    printf("substraction\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",dif[i][j]);
        }
        printf("\n");
    }
    
            for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
            for(int k=0;k<c1;k++){
            k1[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
        printf("Multiplication\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;){
                printf("%d",k1[i][j]);
            }
            printf("\n");
        }
    }

}
