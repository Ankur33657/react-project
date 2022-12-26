//Using call by refences....
#include <stdio.h>
int refence(int* x,int* y){
    int c,d;
    c = *x;
    d = *y;
    *x = c +d;
    *y = c - d;
}
int main(){
int a,b;
printf("Enter the value of a and b ");
scanf("%d %d",&a,&b);
refence(&a,&b);
printf("The new value of a and b is %d & %d",a,b);

}