#include <stdio.h>
int n;
void Task(int n,int arr[n]){
    int max=arr[0];
  for(int i=1;i<n;i++){
      if(arr[i]>max){
          max=arr[i];
      }
  }
printf("%d is greatest",max);
}
int main(){
    int n;
    printf("Enter the number of elements of 1-D array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of an array");
    for(int i=0;i<n;i++){
        printf("Enter the %dth element of an array:",i+1);
        scanf("%d",&arr[i]);
    }
   Task(n,arr);
     
}