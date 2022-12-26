#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter the number  ");
  scanf("%d", &a);
  printf("Enter 1 to check");
  scanf("%d", &b);

  switch (b)
  {
  case 1:
    if (a % 2 == 0)
    {
      printf("Even\n");
    }
    else
      printf("Odd\n");
  case 2:
    if (a > 0)
    {
      printf("+ve no.\n");
    }
    else
      printf("-ve value\n");
  }
}