/* WAP which implement the working of all bitwise operator
like bitwise and,bitwise or, bitwise XOR , complement, bitwise left shift
bitwise right shift */
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    //using  bitwise and operator
    c = a & b;
    printf("%d is the value of %d & %d\n",c,a,b);

    //using bitwise OR operator.
    c = a | b;
    printf("%d is the value of %d & %d\n",c,a,b);

    //using bitwise XOR operator.
    c = a^b;
      printf("%d is the value of %d & %d\n",c,a,b);

    //Using complement operator
    c = ~a;
    printf("%d is the complement of %d\n",c,a );
    c = ~b;
    printf("%d is the complement of %d\n",c,b ); 
    //Using bitwise left shift.
    printf("%d is the bitwise left shift 2 of %d\n",a<<2,a); 
     printf("%d is the bitwise left shift 2 of %d\n",b<<2,b);

    //Using bitwise Right shift..
    printf("%d is the bitwise right shift 2 of %d\n",a>>2,a); 
     printf("%d is the bitwise right  shift 2 of %d\n",b>>2,b);

     printf("**HAPPY ENDING OF PROGRAME**");
     
 
} 