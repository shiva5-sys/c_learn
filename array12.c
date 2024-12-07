// To swap first and last element of the given array.

#include <stdio.h>

int main()
{
    int n, temp;
    scanf("%d", &n);
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    temp = arr1[0];
    arr1[0] = arr1[n-1];
    arr1[n-1] = temp;
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
}
