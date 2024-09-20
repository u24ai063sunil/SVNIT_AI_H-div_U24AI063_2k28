// C program to read an array of 10 numbers and find sum of the numbers.
#include <stdio.h>
int main()
{
    int num[10],sum=0;
    for(int i=0;i<=9;i++)
    {
        printf("enter the %d of the 10 numbers:",i+1);
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    printf("Array of 10 numbers is:\n");
    for(int i=0;i<=9;i++)
    {
        printf("%d\n",num[i]);
    }
    printf("the sum of all the numbers is:%d",sum);

    return 0;
}
