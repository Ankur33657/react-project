#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int l = 0, u = n;
    int c = 0;
    int m=0;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of an array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The Entered array elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    // for shorting of an array...
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
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
    int z;
    printf("\nEntered the seaching value:\n");
    scanf("%d", &z);

    m = (l + u) / 2;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",m);
        if (arr[m] > z)
        {
            u = m - 1;
            m = (l + u) / 2;
        }
        else if (arr[m] < z)
        {
            l = m + 1;
            m = (l + u) / 2;
        }
        else if (arr[m] == z)
        {
            printf("Element found at %d position", m + 1);
            c = 1;
            return 0;
        }
    }
    if (c == 0)
    {
        printf("Element not found:");
    }
}