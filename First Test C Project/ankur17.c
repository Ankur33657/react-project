//Fibonacci series
#include<stdio.h>
int series(int a){

 if(a==2 || a==1){
return 1;    
}
else
return (series(a-1) + series(a-2));    

}
int main(){
int b; 
//label:   
printf("which series of fibonacci number you want to find: ");
scanf("%d",&b);
printf("The %d series of fibonacci number is  %d\n ",b,series(b));
//printf("click 1 to continue and 2 for exit: ");
//scanf("%d",&b);
//if(b==1){
//goto label; 
//}
//else{
////goto end;    
//} 
//end:
//printf("Aapki yatra subh ho\n welcome again\n ");  
}