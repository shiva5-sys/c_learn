// To find sum of elements at odd indexes.

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
        if(i%2==1)
        {
            sum = sum + arr[i];
        }
    }
    printf("%d\n", sum);
}
