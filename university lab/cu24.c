#include <stdio.h>
#include<stdlib.h>
int main(){
    int n,z;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int*ptr;
    ptr=(int*)malloc(sizeof(n));
    for(int i=0;i<n;i++){
        printf("The address of %dth array is %d\n",i+1,ptr);
        ptr++;
    }
    ptr=(ptr-n);
    printf("Enter new size of array\n");
    scanf("%d",&z);
    ptr=realloc(ptr,z);
    for(int i=0;i<z;i++){
        printf("The address of %dth array is %d\n",i+1,ptr);
        ptr++;
    }
    free(ptr);
}