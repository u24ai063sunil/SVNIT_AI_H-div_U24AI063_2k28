// C program to combine two arrays A and B which are bubble sorted,and then sort the array which contain al the elements of the combined array.
#include <stdio.h>
int main() 
{
    int arr1[5]={2,7,9,34,89},arr2[5]={-6,0,10,67,100},arr3[10],temp;
    printf("Array1:\t");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\nArray2:\t");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr2[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(i<5)
        {
            arr3[i]=arr1[i];
        }
        else
        {
            arr3[i]=arr2[i-5];
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(arr3[j]>arr3[j+1])
            {
                temp=arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=temp;
            }
        }
    }
    printf("\nSorted combined array:\n"); // arr3 is combined sorted array of array 1 and array 2
    for(int i=0;i<10;i++)
    {
        printf("%d\t",arr3[i]);
    }
    return 0;
}
