// Write a C program to find whether a number is even or odd.
#include <stdio.h>
void EvenOdd(int a)
{
    if(a%2==0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
}
int main() 
{
    int num;
    printf("Enter the number:\t");
    scanf("%d",&num);
    EvenOdd(num);
    return 0;
}
