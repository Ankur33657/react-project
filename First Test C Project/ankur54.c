/*                *
                 * *
                * * *
               * * * *
              * * * * *            */

#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=n-i;j--){
            printf("*");
            for(int k=1;k<=i;k++){
                printf("*");
            }
            printf("\n");
        }
    }
}              
