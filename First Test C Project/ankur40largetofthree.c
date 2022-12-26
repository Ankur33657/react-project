/* Programe on input three numbers from the user
and find out the greatest using ternary
operator */
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    ((a>b) && (a>c)) ? printf("%d is greater",a): (((b>a) && (b>c)) ? printf("%d is greater",b):(((c>a) && (c>b))? printf("%d is greater",c):printf("Repeated number")));
}