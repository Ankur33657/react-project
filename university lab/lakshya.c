#include <stdio.h>
int factorial( int* p){
if(*p==1){
    return 1;
}
else
return (*p *factorial(p));
}
int main(){
int n;
printf("Enter the no to find factorial:");
scanf("%d",&n);
int a =factorial(n,&n);
printf("The factorial of %d is %d",n,a);
}