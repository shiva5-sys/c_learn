// Write a program to move zeros to the front of the array.
//  Note : Array contains only 0's and 1's. ???????

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1 && arr[i+1]==0)
        {
            arr[i+1]=1;
            arr[i]=0;
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}