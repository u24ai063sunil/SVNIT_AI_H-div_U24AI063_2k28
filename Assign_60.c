// C program to sort (selection sort) the array.
#include <stdio.h>
int main() 
{
    int n,temp;
    printf("Enter the no. of terms of array:\n ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements of the array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted Array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
