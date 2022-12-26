#include <stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("Enter the number");
    scanf("%d",&a);
    printf("Enter 1 for square and 2 for square root");
    scanf("%d",&b);
    switch(b){
        case 1:
        printf("%d",a*a);
        break;
        case 2:
        printf("%f",sqrt(a));
    }

}