#include <stdio.h>
int main(){
int num[6]={23 , 54 , 4 , 95 , 73 , 78 };
printf("the array is represented as:");
int i;
for(i=0;i<6;i++)
{
    printf("%d",num[i]);
} 
printf("\n");   
printf("The array in reverse order is:\n ");
for (i=5;i>=0;i--){
 printf("%d",num[i]);   
}
}