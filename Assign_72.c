// C program to rotate an array by N positions.
#include <stdio.h>
int main() 
{
    int arr[6]={2,6,5,9,4,0}
   ,arr_Rot[6],num_pos,eff_num_pos;
    printf("Array:\t");
    for(int i=0;i<6;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the number of positions we need to rotate the array:\t"); //enter the position asked in the question
    scanf("%d",&num_pos);
    eff_num_pos=num_pos%6;
    for(int i=0;i<6;i++)
    {
        if(i<eff_num_pos)
        {
            arr_Rot[i+(6-eff_num_pos)]=arr[i];
        }
        if(i>=eff_num_pos)
        {
            arr_Rot[i-eff_num_pos]=arr[i];
        }
    }
    printf("\nRotated array:\t");
    for(int i=0;i<6;i++)
    {
        printf("%d\t",arr_Rot[i]);
    }
    return 0;
}
