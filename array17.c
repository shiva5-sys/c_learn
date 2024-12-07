// To interchange even & odd index elements.
//  Note: The no.of elements are always even.

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
    for(int i=0; i<n;i+=2)
    {
        temp = arr1[i];
        arr1[i] = arr1[i+1];
        arr1[i+1] = temp;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
}
