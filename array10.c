// To find maximum element in the given array.

#include <stdio.h>

int main()
{
    int n, max;
    scanf("%d", &n);
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(max<arr1[i])
        {
            max = arr1[i];
        }
    }
    printf("%d", max);
    printf("\n");
}
