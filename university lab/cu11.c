//For bubble shorting
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of an array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
                int temp;
   for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nArray after shorting :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}