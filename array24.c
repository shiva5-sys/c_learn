// To find repeated elements in the array.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int d=0;
    int distinct[n];
    for(int i=0; i<n; i++)
    {
        int flag=1;
        for(int j=0; j<d; j++)
        {
            if(arr[i]==distinct[j])
            {
                flag=0; break;
            }
        }
        if(flag==1)
        {
            distinct[d++] = arr[i];
        }

    }
    for(int i=0; i<d; i++)
    {
        printf("%d ", distinct[i]);
    }
    int freq[d];
    for(int i=0; i<d; i++)
    {
        int count=0;
        for(int j=0; j<n; j++)
        {
            if(distinct[i]==arr[j])
            {
                count++;
            }
        }
        freq[i] = count;
    }
    printf("\n");
    for(int i=0; i<d; i++)
    {
        if(freq[i]>1)
        {
            printf("repeated is %d with %d occurrences \n", distinct[i], freq[i]);
        }
    }
    printf("\n");
}