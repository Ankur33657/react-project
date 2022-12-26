#include <stdio.h>
struct student{
    int id;
    char name[20];
    float marks;
}s1;
void func(struct student s1){
printf("Name-%s\n",s1.name);
printf("Id-%d\n",s1.id);
printf("Marks-%.2f\n",s1.marks);

}
int main(){
    printf("Enter detailof  student\n ID\n");
    scanf("%d",&s1.id);
    printf("Name\n");
    scanf("%s",s1.name);
    printf("Marks\n");
    scanf("%f",&s1.marks);
 func(s1);

}