#include <stdio.h>
int main(){
    int n,k;
    printf("Enter the size:\n");
    scanf("%d",&n);
    printf("The 1st pattern is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n 2nd pattern is:\n");
    for (int i = n; i >= 1; --i) {
      for (int j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   printf("\n3rd pattern is:\n");
   for (int i = 1; i <= n; ++i,  k = 0) {
      for (int space = 1; space <= n - i; ++space) {
         printf("  ");
      }
      while ( k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   printf("\n 4th pattern is:\n");
    for (int i = n; i >= 1; --i) {
      for (int space = 0; space < n - i; ++space)
         printf("  ");
      for (int j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (int j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }
   printf("\n 5th pattern is:\n");
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           printf("* ");
       }
       printf("\n");
   }
}