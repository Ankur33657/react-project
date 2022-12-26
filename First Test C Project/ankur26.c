// To trilling space of html programe..
#include <stdio.h>
#include <string.h>
void thriller(char*string){
    int i;
   int in=0;
   int index=0;
    for(int i=0;i<strlen(string);i++){
        if(string[i]=='<'){
        in=1;
        continue;
        }
        else if(string[i]=='>'){
            in=0;
            continue;
        }
    }
    if(in==0){
        string[index]=string[i];
        index ++;
    }
    string[index]='\0';

}
int main(){
    char string[] ="<H1>   This is captain Ankur singh      <H2>";
    thriller(string);
    printf("this is world of~~%s~~~",string);
    return 0;

}