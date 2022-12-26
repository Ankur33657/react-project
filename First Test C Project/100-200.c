#include <stdio.h>
int main(){
    int a;
    int sum=0;
    for(int i=101;i<200;i++){
        if(i%5==0){
            sum +=i;
        }
    }
    printf("sum = %d",sum);
    
}