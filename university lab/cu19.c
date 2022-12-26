#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n];
    int *ptr1=&a[n-n];
    printf("Enter the elements of an array:\n ");
    for(int i=0;i<n;i++){
        scanf("%d",ptr1);
        ptr1++;
    }
    int*ptr=&a[n-1];
    printf("\nThe array in reverse order using pointer is:\n");
    printf("################################\n");
    printf("#  Address\t*\tValue  #\n");
    for(int i=0;i<n;i++){
        printf("#  %d\t*\t",ptr);
        printf("%d      #",*ptr);
        printf("\n");
        ptr--;
    }
    printf("################################");
}