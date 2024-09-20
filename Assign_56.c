// C program to read array of 10 integers and count the number of positive, negative and zero elements.
#include <stdio.h>
int main()
{
    int integer[10],count_pos=0,count_neg=0,count_zero=0;
    printf("enter the values of array:\n");
    for(int i=0;i<=9;i++)
    {
        printf("enter the value of %d of the 10 integers:",i+1);
        scanf("%d",&integer[i]);
        if(integer[i]>0)
        {
            count_pos+=1;
        }
        else if(integer[i]<0)
        {
            count_neg+=1;
        }
        else
        {
            count_zero+=1;
        }
    }
    printf("the array of 10 integer is :\n");
    for(int i=0;i<=9;i++)
    {
        printf("%d\n",integer[i]);
    }
    printf("the count of positive elements is:%d\n",count_pos);
    printf("the count of negative elements is:%d\n",count_neg);
    printf("the count of zero elements is:%d",count_zero);
    return 0;
}
