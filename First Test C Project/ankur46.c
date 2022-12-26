/*To check the menu driven of the user.
--> Even/odd
--> Positive / Negative
--> square of a number 
--> Square root of a number           */
#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    printf("Entered the number: ");
    scanf("%d",&a);
    printf("Enter 1--> Even/odd \n 2--> Positive/Negative \n 3 --> square of a number \n 4 --> Square root: ");
    scanf("%d",&b);
    switch(b){
        case 1: 
        if(a%2==0){
            printf("Even");
        }
        else
        printf("Odd");
        break;
        case 2:
        if(a>=0){
            printf("Positive");
        }
        else 
        printf("Negative");
        break;
        case 3: 
        printf("%d",a*a);
        break;
        case 4:
        printf("%f",sqrt(a));
        break;
        default :
        printf("Entered invalid input: ");
    }
}