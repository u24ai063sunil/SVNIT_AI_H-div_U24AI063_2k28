// C program to read 10 integers and count total number of odd elements and total number of even elements.
#include <stdio.h>
int main()
{
    int integer[10],count_e=0,count_o=0;
    printf("enter the values of array:\n");
    for(int i=0;i<=9;i++)
    {
        printf("enter the value of %d of the 10 integers:",i+1);
        scanf("%d",&integer[i]);
        if(integer[i]%2==0)
        {
            count_e+=1;
        }
        else
        {
            count_o+=1;
        }
    }
    printf("the array of 10 integer is :\n");
    for(int i=0;i<=9;i++)
    {
        printf("%d\n",integer[i]);
    }
    printf("the count of odd integers is:%d \n",count_o);
    printf("the count of even integers is:%d",count_e);
    return 0;
}
