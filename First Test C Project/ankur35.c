//This programe is of ex-1.a from c language book...
#include <stdio.h>
int main(){
int a;
float b,c,d;
    printf("Enter the salary of yours: ");
    scanf("%d",&a);
    b = 0.4*a;
    c = 0.2*a;
    d = b+c;
    printf("The gross salary is %.2f",a-d);    


    
}