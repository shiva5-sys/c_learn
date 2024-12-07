// To find the number of occurrences of a given number.

#include <stdio.h>

int main()
{
    int n, count, num;
    scanf("%d", &n);
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &num);
    for(int i=0; i<n; i++)
    {
        if(num==arr1[i])
        {
            count++;
        }
        
    }
    printf("%d", count);
    printf("\n");
}
