// C program to read 2 array of 10 integers and print their sum in the 3rd array.
#include <stdio.h>
int main() 
{
    int arr1[10],arr2[10],arr_sum[10];
    printf("Enter the elements of the Array1:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of the Array2:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("Array1:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr1[i]);
    }
    printf("Array2:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr2[i]);
    }
    printf("Array_sum:\n");  //Array_sum=arr1 +arr2
    for(int i=0;i<10;i++)
    {
        arr_sum[i]=arr1[i]+arr2[i];
        printf("%d\n",arr_sum[i]);
    }
    return 0;
}
