#include <stdio.h>
int main(){
    int a, b=1;
    printf("Please enter the number which you want the table: ");
    scanf("%d", &a);

    while(b<=10){
        printf("%d x %d = %d\n",a,b,a*b);
        b=b+1;
    }
    return 0;

    }