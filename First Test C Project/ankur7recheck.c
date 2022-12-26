#include <stdio.h>
 int main(){
 int a, b=1;
 printf("Please enter the no which you want the table: ");
 scanf("%d\n", &a);
 do{ 
    printf("%d x %d =%d\n",a,b,a*b);
    b=b+1;
 } while (b <= 10);
 return 0;
 }
 //This code is run only by enter the "exit" in the complier....