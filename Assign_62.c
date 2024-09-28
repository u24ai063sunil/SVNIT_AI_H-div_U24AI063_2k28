// C program to reverse an Array.
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the no.of elements required for array:\t");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the Array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array:\t");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nReversed Array:\t");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[n-i-1]);
    }
    return 0;
}
