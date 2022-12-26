//To check whether digits of a number is repeating or not...
#include <stdio.h>
int main(){
int arr[10]={0};
int N;
printf("Enter the input: ");
scanf("%d",&N);
int rem;
while(N>0){
rem=N%10;
if(arr[rem]==1)
break;
arr[rem]=1;
N=N/10;    
}

if(N>0)
printf("yes");

else 
printf("No ");    

}