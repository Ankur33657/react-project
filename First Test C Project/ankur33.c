#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() abs for absolute and fbs for floating */
int main(void)
{ 
double interval;
int i;
for(i = 0; i <30; i++)
{
 interval = i/10.0;
 printf("sin(%.1lf) = %f \t", interval,  fabs(sin(interval)));
}


printf("\n+++++++\n");
return 0;
}