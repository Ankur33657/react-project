#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    char z;
    char*ptr=NULL;
    printf("Enter the size of an array");
    scanf("%d",&n);
    ptr = ((char*)malloc(n*sizeof (char)));
    printf("Enter the character:");
    for(int i=0;i<n;i++){
        scanf("%s",&ptr[i]);
    }
    printf("\nEntered the search character:");
     scanf("%s",&z);
    int count=0;
    int c=0;
    for(int i=0;i<n;i++){
        if((ptr[i]==z)){
           count++;
            c=1;
        }
    }
    if(c==0){
        printf("\nCharacter not found:");
    }
    if(c==1){
        printf("\nCharacter found \n %d times:",count);
    }
    free(ptr);


}