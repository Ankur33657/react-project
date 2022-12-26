/*/* Program to convert inches into feet and inch
   1 feet= 12 inches   

#include <stdio.h>
int main(){
    int n,q,r;
    printf("Enter the inches to which you have to convert into feet & inches\n");
    scanf("%d",&n);
    q = n/12;
    r = n%12;
    printf("The %d inches = %d feet %d inch\n",n,q,r);
}      */

#include <stdio.h>
int main(){
    int a,c;
    printf("Enter a number");
    scanf("%d",&a);
    int sum =0;
    while(a>0){
        c= a%10;
        sum +=c;
        a =a/10;
    }
    printf("Sum = %d",sum);
}