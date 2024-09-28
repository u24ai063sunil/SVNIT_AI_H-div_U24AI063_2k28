// C program to read 3*3 matrix and print its transpose.
#include <stdio.h>
int main() 
{
    int arr[3][3];
    printf("Enter the elements of the 3*3 matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("3*3 Matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of 3*3 Matrix:\n");   //Transpose of matrix means row takes place of columns and vice a versa.
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
