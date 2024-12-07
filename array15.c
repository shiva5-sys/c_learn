// To find cummulative sum of the given array.

#include <stdio.h>

int main()
{
    int n, sum;
    scanf("%d", &n);
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<n; i++)
    {
        sum = sum + arr1[i];
    }
    printf("%d", sum);
    printf("\n");
}
