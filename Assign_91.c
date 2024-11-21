//WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING 

//POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.
#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    int *ptr=&num;
    printf("The square of %d is:%d",*ptr,*ptr * *ptr);
    printf("\nThe cube of %d is:%d",*ptr,*ptr * *ptr * *ptr);
    return 0;
}    
