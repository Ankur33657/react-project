//Ashutosh programe
#include <stdio.h>
#include <stdlib.h>
int main(){
int n,z;
int *ptr=NULL;
printf("Enter the size of an array:");
scanf("%d",&n);
ptr = ((int*) malloc(n* sizeof (int)));
printf("\nEnter the elements of an array:\n");
for(int i=0;i<n;i++){
    scanf("%d",&ptr[i]);
}
printf("\nThe reallocation of memory starts from\n");
printf("Enter new size ");
scanf("%d",&z);
ptr= ((int*)realloc(ptr,z*sizeof(int)));
printf("Entered new elements of an array\n");
for(int j=0;j<z;j++){
    scanf("%d",&ptr[j]);
}
int sum=0;
for(int j=0;j<z;j++){
    sum += ptr[j];
}
printf("The sum of all the elements are: %d",sum);
int y=0;
for(int i=2;i<sum/2;i++){
    if(sum%i==0){
        printf("\nNot a prime");
        y=1;
        break;
    }
}
if(y==0){
printf("\nPrime no.");
}
free(ptr);


}