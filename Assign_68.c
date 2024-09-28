// C program to read two 3*3 matrix and store their multiplication in the third 3*3 martrix.
#include <stdio.h>
int main() 
{
    int mtrx1[3][3],mtrx2[3][3],mtrx3[3][3],sum1[3][4],sum[3][4];
    printf("Enter the elements of the 3*3 matrix 1:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&mtrx1[i][j]);
        }
    }
    printf("Enter the elements of 3*3 matrix 2:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&mtrx2[i][j]);
        }
    }
    printf("3*3 Matrix1:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",mtrx1[i][j]);
        }
        printf("\n");
    }
    
    printf("3*3 Matrix2:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",mtrx2[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
        sum[i][0]=0;
        for(int j=0;j<3;j++)
        {
            sum[i][j+1]=sum[i][j]+(mtrx1[i][j]*mtrx2[j][i]);
        }
        sum1[i][i+1]=sum[i][3];
        sum[i][0]=0;
        for(int j=0;j<3;j++)
        {
            sum[i][j+1]=sum[i][j]+(mtrx1[i][j]*mtrx2[j][i+1]);
        }
        sum1[i][i+2]=sum[i][3];
        sum[i][0]=0;
        for(int j=0;j<3;j++)
        {
            sum[i][j+1]=sum[i][j]+(mtrx1[i][j]*mtrx2[j][i+2]);
        }
        sum1[i][i+3]=sum[i][3];
        }
        if(i==1)
        {
        sum[i][0]=0;
        for(int j=0;j<3;j++)
        {
            sum[i][j+1]=sum[i][j]+(mtrx1[i][j]*mtrx2[j][i-1]);
        }
        sum1[i][i]=sum[i][3];
        sum[i][0]=0;
        for(int j=0;j<3;j++)
        {
            sum[i][j+1]=sum[i][j]+(mtrx1[i][j]*mtrx2[j][i]);
        }
        sum1[i][i+1]=sum[i][3];
        sum[i][0]=0;
        for(int j=0;j<3;j++)
        {
            sum[i][j+1]=sum[i][j]+(mtrx1[i][j]*mtrx2[j][i+1]);
        }
        sum1[i][i+2]=sum[i][3];
        }
        if(i==2)
        {
         sum[i][0]=0;
        for(int j=0;j<3;j++)
        {
            sum[i][j+1]=sum[i][j]+(mtrx1[i][j]*mtrx2[j][i-2]);
        }
        sum1[i][i-1]=sum[i][3];
        sum[i][0]=0;
        for(int j=0;j<3;j++)
        {
            sum[i][j+1]=sum[i][j]+(mtrx1[i][j]*mtrx2[j][i-1]);
        }
        sum1[i][i]=sum[i][3];
        sum[i][0]=0;
        for(int j=0;j<3;j++)
        {
            sum[i][j+1]=sum[i][j]+(mtrx1[i][j]*mtrx2[j][i]);
        }
        sum1[i][i+1]=sum[i][3];   
        }
    }
    printf("3*3 Matrix3:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",sum1[i][j+1]);
        }
        printf("\n");
    }
    return 0;
}
