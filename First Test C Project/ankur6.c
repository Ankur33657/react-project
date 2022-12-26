#include <stdio.h>

int main(){
int maths;
printf("enter marks of mathematics: ");
scanf("%d", &maths);


switch (maths) {
    case 56:
    printf("you got diamond bat");
    break;
    case 46:
    printf("better luck next time");
    break;
    default:
    printf("you are average");
}



}