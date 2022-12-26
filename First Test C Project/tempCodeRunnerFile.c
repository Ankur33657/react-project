#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d;
    float e;
    printf(" Equation is in (Ax^2 + bx + c),Enter the value of A,B and C:");
    scanf("%d %d %d",&a,&b,&c);
    d= (b*b) - (4*a*c);
    if(d=0){
     e= -b/(float)a;
     printf("Roots are equal and it is %.2f",e);
    }
    else if(d>0){
        d= sqrt(d);
        e= (-b + d)/(float)2*a;
        printf("Root is +/- %.2f",e);   
     }
     else
     d = sqrt(d);
     e = (-b + d)/(float)2*a;
        printf("Root is +/- %.2f",e); 
}