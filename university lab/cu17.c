#include <stdio.h>
#include <stdlib.h>
int main(){
       int z,m=0,t=0,p=0,l=0;
    char a[100],b[100];
    printf("Enter the string 1:\n");
    gets(a);
    printf("Enter the string 2:\n");
    gets(b);
    for(int i=0;b[i]!='\0';i++){
            if(b[i]!=' '){

            l++;
            }
            p++;
        }
        int w=l;
        l=0;
        for(int i=0;a[i]!='\0';i++){
            if(a[i]!=' '){
                l++;
            }
            t++;
        }
        int v=l;
    printf("Enter\n1=strlen():\n2=strcpy():\n3=strcat():\n4=strcmp():\n5=strrev():\n");
    scanf("%d",&z);
    switch(z){
        case 1:
        printf("%d is the length of string 1:\n",v );
        printf("%d is the length of string 2:\n",w );
        break;
        case 2:
        for(int j=0;a[j]!='\0';j++){
            a[j]=0;
       for(int i=0;b[i]!='\0';i++){
          a[i]=b[i];
       }
        }
       
       printf("String 2 copy on string 1 is:\n");
       puts(a);
      break;
       case 3:
       for(int i=0;b[i]!='\0';i++){
       a[t]=b[i];
        t++;
       
       }
       printf("String 1 concatinate to string 2 is:");
       puts(a);
       break;
       case 4:
       if(t>p){
       for(int i=0;i<t;i++){
           if(a[i]!=b[i]){
              m=1;
       break;
       }
       }
       if(m==1){
           printf("Unequal String:");
       }
       else 
       printf("Equal String:");
       }
       if(p>=t){
       for(int i=0;i<p;i++){
           if(a[i]!=b[i]){
              m=1;
       break;
       }
       }
       if(m==1){
           printf("Unequal String:");
       }
       else 
       printf("Equal String:");
       }
       break;
       case 5:
       printf("Reverse Order of string 1 is:\n");
       for(int i=t;i>=0;i--){
           printf("%c",a[i]);
       }
       printf("\n");
        printf("Reverse Order of string 2 is:\n");
       for(int i=p;i>=0;i--){
           printf("%c",b[i]);
       }
       break;
        default:
        exit(0); 
    }
    
}