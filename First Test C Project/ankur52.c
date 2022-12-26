//Printing armstome no. b/w m and n
#include<stdio.h>

#include<math.h> 

  

int main()  

{  

  int count, limit, rem, temp, num, n;  

  float sum;  

  

  printf("Enter 2 integer numbers\n");  

  scanf("%d%d", &count, &limit);  

  

  printf("\nArmstrong numbers between %d and %d\n", count, limit);  

  

  while(count <= limit)  

  {  

    num = temp = count;  

    n  = sum = 0;  

  

    while(temp!=0)  

    {  

      temp = temp / 10;  

      n++;  

    }  

  

    while(num!=0)  

    {  

      rem = num % 10;  

      sum = sum + pow(rem, n);  

      num = num / 10;  

    }  

  

    if(count == sum)  

    {  

      printf("%d is Armstrong number\n", count);  

    }  

  

    count++;  

  }  

  

  return 0;  

}  