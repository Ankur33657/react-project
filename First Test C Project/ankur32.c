/* Date- 1/09/2021 
written by- Ankur singh
for the pupose to get 1 from the code..
This programe will going to read eash character in the programing*/
#include <stdio.h>
int main(){
    int blank=0, digit =0, character =0;
    int c;
    for(; c = (getchar()) != EOF ; character++ ){
        if(' '){
            ++blank;
        }
        else if(c>='0' && c<='9'){
          ++digit;
        }
    }
    printf("The no of blank space in programe is %d,digit = %d, character + %d",blank,digit,character);
}