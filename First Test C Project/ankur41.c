#include <stdio.h>
int main(){
    int a,b,c,d,e,f;
    float g;
    printf("Enter the marks of five subject");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    f = a + b + c + d + e;
    g = f/5.0;
    printf("Total Percentage is %.2f\n",g);
    if((g>=90)){
        printf("A grade");
    }
    else if((g>=80) && (g<90)){
        printf("B grade");
    }
    else if((g>=70) && (g<80)){
        printf("C grade");
    }
    else
    printf("fail");

}