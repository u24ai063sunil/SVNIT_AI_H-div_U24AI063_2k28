// C program to read 3*3 matrix and find out the max. and min. element out of them.
#include <stdio.h>
int main() 
{
    int arr[3][3],max,min;
    printf("Enter the elements of the 3*3 matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("3*3 matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    min=max=arr[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]>=max)
            {
                max=arr[i][j];
            }
            if(arr[i][j]<=min)
            {
                min=arr[i][j];
            }
        }
    }
    printf("The max. element is: %d",max);
    printf("\nThe min. element is: %d",min);
    return 0;
}
