// To print the array in reverse.

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
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
}
