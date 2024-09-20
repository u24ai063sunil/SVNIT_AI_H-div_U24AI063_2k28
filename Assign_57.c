// C program to read n integers and find max and min of them.
#include <stdio.h>
int main() 
{
    int max,n,min;
    printf("Enter the number of elements to compare:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<=(n-1);i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array of elements is:\n");
    for(int i=0;i<=(n-1);i++)
    {
        printf("%d\n",arr[i]);
    }
    max=min=arr[0];
    for(int i=0;i<=(n-1);i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("the max.value of all the %d elements is:%d\n",n,max);
    printf("the min.value of all the %d elements is:%d",n,min);
    return 0;
}
