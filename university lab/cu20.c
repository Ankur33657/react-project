#include <stdio.h>
int *greatest(int *p,int *q){
    if(*p>*q){
        return p;
    }
    else
    return q;
}
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    int *ptr;
    ptr=greatest(&a,&b);
    printf(" greatest     address \n");
    printf(" %d            %d",*ptr,ptr);
}