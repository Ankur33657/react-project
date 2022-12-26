// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("Enter the starting and end point:");
//     scanf("%d %d",&a,&b);
//       for(int i=a;i<=b;i++){
//         int c=i;
//         int sum =0;
//         for(int j=i;j>0;j=j/10){
//            int d=j%10;
//            sum+=d*d*d;
//         }
//         if(sum==c){
//             printf("%d armstome\n",c);
//         }
        
    
//     }
// }
#include <stdio.h>
#include<string.h>
 
  struct employee{
      char name[20];
      int id;
      float salary;
  };
 struct doj{
     int date;
     char month[10];
     int year;
 };
int main()
{   struct employee stu1,stu2;
    struct doj d1,d2;
    printf("Enter your name: ");
    scanf("%s",stu1.name);
    printf("Enter your id : ");
    scanf("%d",&stu1.id);
    printf("Enter your your salary : ");
    scanf("%f",&stu1.salary);
   
    printf("Enter your date of joining : ");
    scanf("%d%s%d",&d1.date,d1.month,&d1.year);
    printf("Data of second employee\n");
     printf("Enter your name: ");
    scanf("%s",stu2.name);
    printf("Enter your id : ");
    scanf("%d",&stu2.id);
    printf("Enter your your salary : ");
    scanf("%f",&stu2.salary);
   
    printf("Enter your date of joining : ");
    scanf("%d%s%d",&d2.date,d2.month,&d2.year);
    printf("___________________________________________________\n");
   
    printf("|Name         |");
    printf("id           |");
    printf("Salary        |");
    printf("DOJ     |\n");
   
    printf("|%s       |",stu1.name);
    printf("%d         |",stu1.id);
    printf("%.1f       |",stu1.salary);
    printf("%d_%s_%d|\n",d1.date,d1.month,d1.year);
   
    printf("|%s        |",stu2.name);
    printf("%d         |",stu2.id);
    printf("%.1f       |",stu2.salary);
    printf("%d_%s_%d|\n",d2.date,d2.month,d2.year);
    printf("----------------------------------------------------");
   
   
   
    return 0;
}