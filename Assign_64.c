// C program to read 3*3 matrix and find the sum of all rows.
#include <stdio.h>
int main() 
{
    int arr[3][3],sum_row1=0,sum_row2=0,sum_row3=0;
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
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
        {
            if(i==0)
            {
                sum_row1+=arr[i][j];
            }
            if(i==1)
            {
                sum_row2+=arr[i][j];
            }
            if(i==2)
            {
                sum_row3+=arr[i][j];
            }
        }
    }
    printf("The sum of elements in 1 st row:%d\n",sum_row1);
    printf("The sum of elements in 2 nd row:%d\n",sum_row2);
    printf("The sum of elements in 3 rd row:%d",sum_row3);
    return 0;
}
