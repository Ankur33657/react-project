#include <stdio.h>
/*/*#include<math.h>
int main(){
    int a,b;
    printf("Enter the digit of armstome\n");
    scanf("%d",&a);
    printf("enter the number\n");
    scanf("%d",&b);
    int c=b;
    int sum=0;
    while(b>0){
        int i=b%10;
        sum+=pow(i,a);
        b=b/10;
    }
    if(c==sum){
        printf("Armstone");
    }
    else
    printf("Not armstone");
}*/
/*int main(){
    int n;
    printf("Enter the last number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\t",i);
    }
}*/
int  fibbo(int a){
    if(a==1 || a==2){
        return 1;
    }
    else
    return (fibbo(a-1) + fibbo(a-2));
    }
 
int main(){
   int n;
   printf("Enter the nth element of fibbonachi series");
   scanf("%d",&n);
   printf("%d is the nth element of fibbo",fibbo(n)); 
}