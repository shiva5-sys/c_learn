// To copy elements of 1 array into another array.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
}
