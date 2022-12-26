#include <stdio.h>

int main(){
int maths, science;
printf("enter your maths no: ");
scanf("%d", &maths);

printf("Enter your science no: ");
scanf("%d", &science);
if(maths>=45 && science>=45)
{
printf("you get diamond sheild");
}

else if (maths<45 && science<45)
{
    printf("bhak ja kr padho");
}
else if (maths>=45 && science<45)
{
   printf("you are geting gold shield");
}
else
{
    printf("you are geting silver shield");
}
}