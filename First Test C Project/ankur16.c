/*km-miles
inch-foot
cms-inch
pound-kg
inchs-meter*/
#include <stdio.h>
int main(){
int a,b,c;

label:
printf("enter the value: ");
scanf("%d",&b);
printf("Enter 1 for km-miles\n 2 for inch-foot\n 3 for cms-inch\n 4 for pound-kg\n 5 for inches-meter ");
scanf("%d",&a);

switch(a){
case 1:
printf("The value of %d km is equal to %f miles\n ", b,0.62*b);
break;
case 2: 
printf("The value of %d inch is equal to %f foot \n", b,0.08*b);
break; 
case 3:  
printf("The value of %d cms is equal to %f inch\n ", b,0.39*b);
break;
case 4:   
printf("The value of %d poundis equal to %f kg \n", b,0.454*b); 
break;  
default:
printf("The value of %d inchs is equal to %f meter \n", b,0.025*b); 
}
printf("please click '6' for again and '7' for quit the program\n ");
scanf("%d",&c);
switch(c){
case 6:
goto label;
default:
goto end;
}
end:
printf(" Thank you for using us and welcome again\n ");

}