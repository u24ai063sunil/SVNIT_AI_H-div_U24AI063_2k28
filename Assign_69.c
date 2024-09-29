// C program to linear search a number in the array.
#include <stdio.h>
int main()
{
    int n,position=0,num_search;
    printf("Enter the no.of elements required in array:\t");
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
    printf("\nEnter the number you want to search:\t");
    scanf("%d",&num_search);
    for(int i=0;i<n;i++)
    {
        if(num_search==arr[i])
        {
            position=i+1;
        }
    }
    if(position==0)
    {
        printf("\n %d is not present in the array",num_search);
    }
    else
    {
        printf("\n %d is present at %d position.",num_search, position);
    }
    return 0;
}
