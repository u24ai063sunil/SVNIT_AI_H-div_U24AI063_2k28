/*
103. WRITE A C PROGRAM TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF TWO GIVEN NUMBERS.
*/

#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int biggest = MAX(num1, num2);
    printf("The biggest number between %d and %d is: %d\n", num1, num2, biggest);
    return 0;
}
