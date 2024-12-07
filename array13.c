// To check if the given element is present in the array.

#include <stdio.h>

int main()
{
    int n, element, flag;
    scanf("%d", &n);
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &element);
    for(int i=0; i<n; i++)
    {
        if(element==arr1[i])
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    
    printf("\n");
}
