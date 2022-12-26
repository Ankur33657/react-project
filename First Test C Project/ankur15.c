#include <stdio.h>
int main(){-
int a,b,c;

printf("Enter the value of a and b: ");
scanf("%d %d",&a,&b);
printf("select 1 for add, 2 for subtract, 3 for multiplication and 4 for division: ");
scanf("%d", &c);
switch(c){
case 1:
 printf("The addition of a and b is %d ",a+b);
 break;
 case 2:
 printf("the sub of a and b is %d ",a-b);
 break;
 case 3:
 printf("the multiplication of a and b is %d ",a*b);
 break;
 default :
 printf("division of a and b is %f ",(float)a/b);
}



}