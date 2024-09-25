// C program to read two arrays of ten integers and swap the values of each other and print it.
#include<stdio.h>
int main()
{
    int arr[10][2],temp;
    printf("Elements of two Arrays are:\n");
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("Array1    Array2  \n");
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=1;j++)
        {
            printf("%d\t\t\t",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<1;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[i][j+1];
            arr[i][j+1]=temp;
        }
    }
    printf("Swaped values of Arrays are:\n");
    printf("Array1    Array2\n");
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=1;j++)
        {
            printf("%d\t\t\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
