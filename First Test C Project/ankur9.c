#include <stdio.h>

int main(){
int maths,science;
printf("please Enter you mathematics number: ");
scanf("%d",&maths);
printf("\nPlease Enter your science nunber: ");
scanf("%d",&science);

while(maths<45||science<45){
printf("please improve yourself\n");
break;
}
}
// This programe attained the situation of infine loop...