#include <stdio.h>
//for comparision between three number....
int main(){
int a,b,c;
printf("please put the first number: ");
scanf("%d",&a);
printf("please enter the second number: ");
scanf("%d",&b);
printf("please put the third value: ");
scanf("%d",&c);
if(a>b){
    if(a>c){
        printf("%d id=s greatest: ",a);
    }
    else 
    {printf("%d is greatest:",c);
    }
}
else if(b>c){
printf("%d is greatest: ",b);
}
else if(c>b && c>a)
{
    printf("%d is greatest: ",c);
}
else {
    printf("all three are equal: ");
}


}