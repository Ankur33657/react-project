#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    int n;
    int i;
    printf("Enter the no. of array you want: ");
    scanf("%d",&n);
    ptr =  (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("Enter the value: ");
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++){
        printf("your %d value is %d\n ",i,ptr[i]);
    }
    printf("Enter the new size of array ");
    scanf("%d",&n);
    ptr = (int*)realloc(ptr,n*sizeof(int));
    for(i=0;i<n;i++){
        printf("Enter the value: ");
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++){
        printf("your %d value is %d\n ",i,ptr[i]);
    }
    free(ptr);


}