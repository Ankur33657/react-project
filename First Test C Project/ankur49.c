#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter no.");
    scanf("%d",&n);
    int a = n;
    while(n>0){
        int i =n%10;
        sum += i*i*i;
        n=n/10;
    }
    printf("%d\n",sum);
    if(a==sum){
        printf("armstone no.");
    }
    else
    printf("not");
}