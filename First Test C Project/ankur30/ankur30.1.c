// This is a game of rock, paper and scissor...
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int b,c;
    int x=0 , y=0;
    printf("Welcome Ankur to the game\n ");
    for(int i=0;i<3;i++){
    printf("Enter 0 for rock, 1 for paper and 2 for scissor:\n ");
    scanf("%d",&b);
    getchar();
    srand(time(NULL));
    printf("The computer input is %d:\n ",rand() % 3);
    c = rand() % 3;
     switch(c){
         case 0:{
         if(b==0){
             printf("Match draw:\n");
         }
         else if(b==1){
             printf("Ankur is winner:\n");
             x++;
         }
         else if(b==2){
             printf("computer is winner::\n ");
             y++;
         }
         break;}
         
         case 1:{
         if(b==0){
             printf("computer win the game::\n ");
             y++;
         }
         else if(b==1){
             printf("Match draw::\n ");

         }
         else if(b==2){
             printf("Ankur is winner of the round:\n");
             x++;
         }
         break;}
         
         case 2:{
         if(b==0){
             printf("Ankur is winner of the round::\n ");
             x++;
         }
         else if(b==1){
             printf("computer wins the round::\n ");
             y++;
         }
         else if(b==2){
             printf("match draw::\n ");

         }
         break;}
         
     }
    }
     if(x>y){
         printf("Ankur is the winner of the game and scored %d:\n",x);
     }
     else if(y>x){
         printf("computer winns the game and scored %d::\n",y);
     }    
     else{
         printf("match draw, better luck next time both scored %d-%d:\n",x,y);
     }
    }