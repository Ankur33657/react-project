//cheack wether the number is armstome or not
#include<stdio.h>
#include <math.h>
int main(){
 int a,b;
 printf("Enter the digit of number");
 scanf("%d",&a);
 printf("Enter the number");
 scanf("%d",&b);
 int c = b;
 int sum =0;
 while(b>0){
     int d = b%10;
     sum += pow(d,a);
     b=b/10;
 }
 if(sum==c){
     printf("%d",c);
 }
 else 
 printf("Not armstome number");
}