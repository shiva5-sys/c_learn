// To print no.of even elements & odd elements in the given array

#include <stdio.h>

int main()
{
    int n, even, odd;
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
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d\n", even);
    printf("%d\n", odd);

}
