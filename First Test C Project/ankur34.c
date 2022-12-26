/* printing the table of sine and cosine function 
on input b/w (o,1) The code going to print the value*/
#include <stdio.h>// Header file of printf(), for loop..
#include <math.h>//Header file of sin(),cosine(),fabs()....
int main(){  //from main() programe going to be excuted..
    double value;
    int c;
    printf("\nThe sine function value:\n");
    for(c=0;c<=10;c++){    // to get all the value b/w 0 and 10
   value = c/10.0;  // to make input b/w (0,1)
   printf(" sin(%.1lf)= %f\t ",value,fabs(sin(value)));
    }
       printf("\nThe cosine function value:\n");
    for(c=0;c<=10;c++){    // to get all the value b/w 0 and 10
   value = c/10.0;        // to make input b/w (0,1)
     printf(" cosine(%.1lf) = %f\t",value, fabs(cos(value)));
    }
}