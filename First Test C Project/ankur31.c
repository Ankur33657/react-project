#include <stdio.h>

int main() {	
    int n;
int sum;
printf("Enter the number:");
    scanf("%d", &n);
    while(n>0){
       sum += (n%10);
       n= n/10; 
    }
    printf("%d",sum);
    
}
// Programe on sum of digits in a given num;