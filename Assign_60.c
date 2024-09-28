// C program to selection sort an array.
#include <stdio.h>
int main()
{
    int arr[5],arr_min[5],q,temp;
    printf("Enter the array elements:\n ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array:\t");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(int i=0;i<4;i++)
    {
        arr_min[i]=arr[i];
        for(int j=i+1;j<5;j++)
        {
            if(arr[j]<arr_min[i])
            {
                arr_min[i]=arr[j];
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
          
        }
    }
    printf("\nSelection Sorted Array:\t");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
