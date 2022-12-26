#include <stdio.h>
int main(){
    int a;
    for(int i=100;i<=999;i++){
        int b=i;
        int sum =0;
        for(int j=i;j>0;j=j/10){
           a=j%10;
           sum+=a*a*a;
        }
        if(sum==i){
            printf("%d armstome\n",i);
        }
        
    
    }
    return 0;
}