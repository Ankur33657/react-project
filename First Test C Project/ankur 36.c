// c language book exercise 1.b....
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the km of b/w to cities: ");
    scanf("%d",&a);
    printf("For conversion\n Enter 1 = meter \n 2= foot\n 3= inches\n 4=centimeter:\n");
    scanf("%d",&b);
    switch(b){
        case 1:{
        printf("The %d in meter equal to %d:",a,a*1000);
        break;}
        case 2:{
        printf("The %d in feet equal to %d",a,a*3280);
        break;}
        case 3:{
        printf("The %d in inches equal to %.3f",a,a*38370.079);
        break;}
        case 4:{
        printf("The %d in centimeter is %d",a,a*100000);
        break;}
    }

}