#include <stdio.h>
int main(){
int a,b;
printf("please put the first value: ");
scanf("%d",&a);
printf("please enter the second value: ");
scanf("%d",&b);
if(a==b){
    printf("%d",6*a);
}
else
{
    printf("the sum of two number is: %d",a+b);
}
}