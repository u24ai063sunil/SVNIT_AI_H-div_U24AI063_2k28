// C program to read an array and find occurence of its elements.
#include <stdio.h>
int main() 
{
    int n,count=0,num_arr;  //num_arr is the number whose occurence is required.
    // n is the number of terms in the array.
    printf("Enter the number of terms required in the array:\t");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array:\t");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the number whose occurrence is required to calculate:\t");
    scanf("%d",&num_arr);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num_arr)
        {
            count++;
        }
    }
    printf("\nThe occurrence of %d is :%d",num_arr,count);

    return 0;
}
