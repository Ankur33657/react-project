#include <stdio.h>
int main(){
    int n,a;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d th element of an array",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search:");
    scanf("%d",&a);
    int c=0;
    for(int j=0;j<n;j++){
        if(a==arr[j]){
            printf("Found at %d position",j);
            c=1;
        }
    }
    if(c==0){
        printf("Not found:");
    }

}