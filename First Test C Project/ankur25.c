#include <stdio.h>

struct drivers{
    char name[76];
    int id;
    char route[1000];
};
struct drivers d1,d2,d3;


int main(){
    printf("Enter name??");
    scanf("%s %s %s",&d1.name,&d2.name,&d3.name);
    printf("Enter id details");
    scanf("%d %d %d",&d1.id,&d2.id,&d3.id);
    printf("Enter route");
    scanf("%s %s %s",&d1.route,&d2.route,&d3.route);
    printf("Name %s\n id %d\n route %s",d1.name,d1.id,d1.route);
    printf("\nName %s\n id %d\n route %s",d2.name,d2.id,d2.route);
    printf("\nName %s\n id %d\n route %s",d3.name,d3.id,d3.route);
    
    
}