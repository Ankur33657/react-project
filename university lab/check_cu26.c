// Check the code
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n,z;
    char a[]={0};
    printf("Enter the String\n");
    gets(a);
    n= strlen(a);
    int*ptr;
    ptr=(char*)malloc(sizeof(n));
    for(int i=0;i<n;i++){
        printf("The address of %dth character is %d\n",i+1,ptr);
        ptr++;
    }
    ptr=(ptr-n);
    printf("Enter another larger string to realloc\n");
    gets(a);
    z=strlen(a);
    ptr=realloc(ptr,z);
    for(int i=0;i<z;i++){
        printf("The address of another string %dth character is %d\n",i+1,ptr);
        ptr++;
    }



}