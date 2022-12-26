#include <stdio.h>
struct Employee{
    char name[120];
    int Id;
    float salary;
    struct joining{
    int date;
    char month[110];
    int year;
    }doj;
}e[5];
int main(){
    for(int i=0;i<5;i++){
    printf("detail \n %dth Employee\n",i+1);
    printf(" Name-");
    scanf("%s",&e[i].name);
    printf(" Id-");
    scanf("%d",&e[i].Id);
    printf(" Salary ");
    scanf("%f",&e[i].salary);
    printf("day of joining \n");
    scanf("%d",&e[i].doj.date);
    printf("Month of joining\n ");
    scanf("%s",&e[i].doj.month);
    printf("Year of joining\n");
    scanf("%d",&e[i].doj.year);
    }
    //******************
//     printf("detail \n 2nd Employee\n");
//     printf(" Name-");
//     scanf("%s",&e2.name);
//     printf(" Id-");
//     scanf("%d",&e2.Id);
//     printf(" Salary ");
//     scanf("%f",&e2.salary);
//     printf("day of joining \n");
//     scanf("%d",&e2.doj.date);
//     printf("Month of joining\n ");
//    scanf("%s",e2.doj.month);
//     printf("Year of joining\n");
//     scanf("%d",&e2.doj.year);
//     //*********************
//     printf("detail \n 3rd Employee\n");
//     printf(" Name-");
//    scanf("%s",&e3.name);
//     printf(" Id-");
//     scanf("%d",&e3.Id);
//     printf(" Salary ");
//     scanf("%f",&e3.salary);
//     printf("day of joining \n");
//     scanf("%d",&e3.doj.date);
//     printf("Month of joining\n ");
//     scanf("%s",&e3.doj.month);
//     printf("Year of joining\n");
//     scanf("%d",&e3.doj.year);

printf("The details of all Employee is-\n");
printf("__________________________________________________\n");
printf("|s.no|Name        |Id   |Salary    |Date of joining|\n");
for(int i=0;i<5;i++){
printf("|%d   |%s |%d |%.2f  |%d %s %d   |\n",i+1,e[i].name,e[i].Id,
e[i].salary,e[i].doj.date,e[i].doj.month,e[i].doj.year);
}
// printf("|2   |%s |%d |%.2f  |%d %s %d   |\n",e2.name,e2.Id,
// e2.salary,e2.doj.date,e2.doj.month,e2.doj.year);
// printf("|3   |%s |%d |%.2f  |%d %s %d   |\n",e3.name,e3.Id,
// e3.salary,e3.doj.date,e3.doj.month,e3.doj.year);
printf("---------------------------------------------------");
}