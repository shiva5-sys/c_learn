// To find no.of elements which are positive numbers.

#include <stdio.h>

int main()
{
    int n, count;
    scanf("%d", &n);
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr1[i]>0)
        {
            count++;
        }
    }
    printf("%d", count);
    printf("\n");
}
