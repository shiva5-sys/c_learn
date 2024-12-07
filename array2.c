// To find sum of even elements int the given array.

#include <stdio.h>

int main()
{
    int n, sum;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            sum = sum + arr[i];
        }
    }
    printf("%d\n", sum);
}
