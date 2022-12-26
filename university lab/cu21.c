#include <stdio.h>
int main(){
    int r,c;
    printf("Enter the no. of rows and column:");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    char b[3];
    int*ptr = &arr[r][c];
    printf("\nEnter the elements of an array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",ptr);
        ptr++;
        }
    }
    // printf("%d",sizeof(r));
    ptr=ptr-(r*c);
    
    printf("\nThe 2-D array  you have entered is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",  *ptr);
        ptr++;
        }
        printf("\n");
    }
    printf("\nSize of ptr is %d",sizeof(ptr));
    printf("\nSize of arr is %d",sizeof(arr));
    printf("\nSize of char arr b is %d",sizeof(b));
    printf("\nSize of *ptr is %d",sizeof(*(ptr)));
    char str[100][50]={"Ankur_singh_is_good_boy_."};
    printf("\nThe size of string is %d",sizeof(str));


}