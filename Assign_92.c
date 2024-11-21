//WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.
#include <stdio.h>
#include <conio.h>

int main()
{
    int n,big;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    printf("Enter the numbers:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }   
    big=*ptr;
    int *ptr_big=&big;
    for(int i=0;i<n;i++)
    {
        if(*(ptr+i)>big)
        {
             *ptr_big=*(ptr+i);
         }
    }  
    printf("The largest number is:%d",*ptr_big);      
    return 0;
}    
