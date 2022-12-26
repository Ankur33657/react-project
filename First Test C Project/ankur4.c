#include <stdio.h>
int main(){
int a , b;
printf("input the number : ");
scanf("%d", &a);
printf("\n");
for(b=1;b<=10;b++)
{printf("%d * %d =%d \n",a,b,a*b);}    
}