// C program to read n integers and find max and 2nd max of them.
#include <stdio.h>
int main() 
{
    int n,max1,max2,temp;
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
    max1=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max1)
        {
            temp=max1;
            max1=arr[i];
            max2=temp;
        }
        if(arr[i]<max1)
        {
            if(arr[i]>max2)
            {
                max2=arr[i];
            }
        }
    }
    printf("the max.value of all the %d elements is:%d\n",n,max1);
    printf("the 2nd max.value of all the %d elements is:%d",n,max2);
    return 0;
}
