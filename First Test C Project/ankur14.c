#include <stdio.h>
int factorial( int num ){
if(num ==1 || num==0){
return 1;
}
else
{
return  (num * factorial(num-1));   
}
}
int main(){
int num;    
printf(" write the number for which you want the factorial ");
scanf("%d",&num);
printf("the factorial of %d is %d",num,factorial(num));
}