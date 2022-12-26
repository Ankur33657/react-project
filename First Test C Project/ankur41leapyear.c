/*Programe to check the input year is leap year or not..*/
#include <stdio.h>
int main(){
    int a;
    printf("Enter the year want to check whether leap or not");
    scanf("%d",&a);
    if( a%4==0 ){
        if(a%400==0){
        printf("Leap year");
        }
        else if(a%100==0){
            printf("Not leap year");
        }
        else
        printf("Leap year");
    }
    else
    printf("Not a leap year");

}
