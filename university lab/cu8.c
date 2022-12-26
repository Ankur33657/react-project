//Sum of all integer greater than 100 & less than 200 and are divisible by 5.
#include <stdio.h>
int main(){
    int sum=0;
    for(int i=101;i<200;i++){
        if(i%5==0){
            sum +=i;
        }
    }
    printf("Name-Ankur singh\nUID-21BCS2869\n");
    printf("%d is the sum of all the integer greater that 100 & less than 200 and divisible by 5",sum);
}
/*#include <stdio.h>
#include <math.h>
int factorial(int a){
    if(a==1){
        return 1;
    }
    else
    return (a*(factorial(a-1)));
}
int main(){
    int x;
   printf("Enter the value of x:");
   scanf("%d",&x);
   float sum=1;
   for(int i=1;i<=x;i++){
       sum += (pow(x,i))/(factorial(i));
   }
   printf("e^x =%.2f",sum);
}*/
/*#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the starting and end point:");
    scanf("%d %d",&a,&b);
      for(int i=a;i<=b;i++){
        int c=i;
        int sum =0;
        for(int j=i;j>0;j=j/10){
           int d=j%10;
           sum+=d*d*d;
        }
        if(sum==c){
            printf("%d armstome\n",c);
        }
        
    
    }
}*/