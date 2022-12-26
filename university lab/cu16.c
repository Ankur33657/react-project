#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int x;
    char a[100],b[100];
    printf("Enter the string 1\n");
    gets(a);
    printf("Enter the string 2\n");
    gets(b);
    printf("Enter\n1=strlen():\n2=strcpy:\n3=strcat:\n4=strcmp:\n5=strrev:\n");
    scanf("%d",&x);
    switch(x){
        case 1:
        printf("\nLength of string 1 is %d\n",strlen(a));
        printf("Length of string 2 is %d\n",strlen(b));
        break;
        case 2:
        printf("String 2 copy to string 1 is %s\n",strcpy(a,b));
        break;
        case 3:
        printf("String 1 concatinate to string 2 is %s\n",strcat(a,b));
        break;
        case 4:
        printf("String 1 compare to string 2 is %d\n",strcmp(a,b));
        if(strcmp(a,b)!=0){
            printf("\nNot equal string\n");
        }
        else
        printf("Equal\n");
        break;
        case 5:
        printf("Reverse order of string 1 is %s\n",strrev(a));
        printf("Reverse order of string 2 is %s\n",strrev(b));
        break;
        default:
        exit(0);

    }
}