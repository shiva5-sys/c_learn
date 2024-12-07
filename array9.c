// To count no. of zeros and one's in the given array
// Note: The array contains either 0 or 1.

#include <stdio.h>

int main()
{
    int n, count0, count1;
    scanf("%d", &n);
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr1[i]==0)
        {
            count0++;
        }
        else if(arr1[i]==1)
        {
            count1++;
        }
        else
        {
            printf("Please enter array elements has 0 or 1\n");
        }
    }
    printf("no.of Zeros = %d\nno.of One's = %d", count0, count1);
    printf("\n");
}
