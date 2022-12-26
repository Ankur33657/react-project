#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d;
    float e,f,g;
    printf(" Equation is in (Ax^2 + bx + c),Enter the value of A,B and C:");
    scanf("%d %d %d",&a,&b,&c);
    d= ((b*b) - (4*a*c));
    g = sqrt((float)d);
    if(d==0){
        printf("Root and real and equal\n");
        e = -b/(float)(2*a);
       printf("%.2f",e);
    }
    else if(d>0){
        printf("Real and unequal roots exist\n");
        e = ((-b + g)/(float)(2*a));
        f = ((-b - g)/(float)(2*a));
        printf("The first root is %.2f\n The second root is %.2f",e,f);
    }
    else{
         d= -((b*b) - (4*a*c));
         g = sqrt((float)d);
        printf("The roots and imaginary and unqual:\n");
        e = (-b/(float)(2*a) );
        printf("The first root %.2f + i %.2f  \n The second root is %.2f - i %.2f ",e,g,e,g); 
    }
     
}