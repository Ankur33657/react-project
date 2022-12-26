#include <stdio.h>

int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    int b=a;
    int sum=0;
    while(a>0){
       int i = a%10;
       sum+=i*i*i;
       a = a/10;
    }
    if(b==sum){
        printf("Armstome");
    }
    else
    printf("Not armstome");
}

/*#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
    int count=1;
        for(int j=1;j<=i;j++){
            printf("%d",count);
            count++;
        }
        printf("\n");
    }
}*/