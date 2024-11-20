// Write a C program to copy elements of one array into another array using pointer.
#include <stdio.h>
#include <conio.h>

int main()
{
    int N;
    printf("Enter the size of the arrays:\t");
    scanf("%d",&N);
    int arr1[N],arr2[N];
    int *ptr=arr1;
    for(int i=0;i<N;i++)
    {
         scanf("%d",ptr+i);
    }     
    for(int i=0;i<N;i++)
    {
         arr2[i]=*(ptr+i);
    } 
    for(int i=0;i<N;i++)
    {
         printf("%d",arr2[i]);
    }      
    return 0;     
}
