#include <stdio.h>
#include <string.h>
struct st{
  int x;
  struct st next;
};
int  main(){
 struct st temp;
 temp.x=10;
 temp.next=temp;
 printf("%d",temp.next.x);
  }