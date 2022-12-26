#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements of an array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of an array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("________________________\n");
    printf("|  Even    |   odd      |");
    printf("\n");
    printf("-------------------------");
    printf("\n");
    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
        printf("|   %d      |",arr[j]);
        continue;
        }
        else
        printf("      %d     |",arr[j]);
        printf("\n");
    }
    printf("-------------------------");

}