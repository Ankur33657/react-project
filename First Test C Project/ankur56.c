#include <stdio.h>
int search(int m,int n){
   
}
int main(){
    int n;
    printf("Enter the no of element in the array");
    scanf("%d",&n);
    printf("Enter the elements of an array");
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d th element of an array:",i+1);
        scanf("%d",&arr[i]);
    }
    //for shorting of an array..
    for(int i=0;i<n-1;i++){
       for(int j=1+i;j<n;j++){
           if(arr[j]<arr[i]){
               int temp= arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
           }
       }
    }
    printf("Elements after shorting is:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    int b;
    printf("Enter the element which is to be search");
    scanf("%d",&b);
    
      
    

}