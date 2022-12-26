#include <stdio.h>

int bit(int x, int y){

while(y!= 0)

{

int took = x & y;

x = x^y;

y = took <<1;

}

return x;

}

int main(){

int a,b;

printf("Enter two nos.");

scanf("%d %d",&a,&b);

printf("sum %d",bit(a,b));

}


