// To find minimum element in the given array.

#include <stdio.h>

int main()
{
    int n, min;
    scanf("%d", &n);
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    min = arr1[0];
    for(int i=0; i<n; i++)
    {
        if(min>arr1[i])
        {
            min = arr1[i];
        }
    }
    printf("%d", min);
    printf("\n");
}
