// To reverse the array.

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
    for(int i=0; i<n/2; i++)
    {
        temp = arr1[n-1-i];
        arr1[n-1-i] = arr1[i];
        arr1[i] = temp;
    }
    for(int i=0; i<n; i++)
    {
           printf("%d ", arr1[i]);
    }
    printf("\n");
}
