#include<stdio.h>
int  reverse(int*ptr,int z,int s){
    int g=0;
for(int i=0;i<s;i++){
if(*ptr==z){
    printf("Found\n");
    g=1;
    return ptr;
}
else 
    ptr++;
}
if(g==0){
    printf("Not found\n");
}


}
int main(){
    int n,a;
    printf("Enter the size of n:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of an array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter searching elements:");
scanf("%d",&a);
int*h=(reverse(&arr[0],a,n));
     printf("Address of found element is %d",h);
}