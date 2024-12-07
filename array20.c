// To print a frequency of all the elements present in the array

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    // distinct elements.
    int d=0, flag=1;
    int distinct[n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<d; j++)
        {
            if(arr1[i]==distinct[j])
            {
                flag=0; 
                break;
            }
        }
        if(flag==1)
        {
            distinct[d++] = arr1[i];
        }
    }
    for(int i=0; i<d; i++)
    {
        printf("%d ", distinct[i]);
    }
    
    
    printf("\n");
}
