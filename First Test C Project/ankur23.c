#include <stdio.h>
int main()
{
    int i;
    int arr[]={2,4,56,7,554,35,45};
    for(i=0;i<7;i++){
   printf("the %d elemrnts of given array is %d\n",i,arr[i]);
    }
   printf("For reversal order of array");
   for(i=7;i>0;i--){
       printf("the %d element of array is %d\n",i,arr[i]);
   }
}