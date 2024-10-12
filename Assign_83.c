// WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM.
#include <stdio.h>
void Arr_Max(int n)
{
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<=(n-1);i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array of elements is:\n");
    for(int i=0;i<=(n-1);i++)
    {
        printf("%d\t",arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
        }
    }
    printf("\nmax.element is: %d",max);
}
int main()
{
    int num;
    printf("Enter the number of elements in the array:\t");
    scanf("%d",&num);
    Arr_Max(num);
    return 0;
}
