#include <stdio.h>
int Swap1(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    printf("value after swapping in Swap1 function:\na=%d  b=%d\n",x,y);

}
int Swap(int*x,int*y){
    int temp = *x;
    *x=*y;
    *y=temp;
} 

int main(){
    int a,b;
    printf("Enter two number:\n");
    scanf("%d %d",&a,&b);
    printf("call by value:\n");
    printf("a=%d & b=%d\n",a,b);
    Swap1(a,b);
    printf("value after swapping in main:\na=%d  b=%d\n",a,b);
    printf("\n\ncall by reference:\n");
    printf("value before swapping in main():\na=%d  b=%d\n",a,b);
    Swap(&a,&b);
    printf("value after swaping in swap function:\na=%d  b=%d\n",a,b);
    printf("Value after swapping in main():\na=%d b=%d",a,b);



}
/*
#include<stdio.h>
int main(){
    int a=10;
    int b[]={2,5,6,7,8,6};
    int *d=&b[6];
    int *p;
    p=&a;
    int **p1=&p;
    printf("%d\n",*p);
    printf("%d",**p1);
    for(int i=0;i<6;i++){
    printf("%d",d[i]);
    }
}*/
