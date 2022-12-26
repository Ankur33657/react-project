#include <stdio.h>
int main()
{
    Char x;
    printf("Enter the character");
    scanf("%c", &x);
    switch (x)
    {
    case 'a':
    case 'e':
    case 'i':

    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'O':
    case 'U':
    case 'I':
        printf("Vowel");
        break;
    default:
        printf("Not a vowel");
    }
}