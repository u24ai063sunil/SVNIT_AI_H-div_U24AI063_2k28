// C program to develop a simple calculator.
#include <stdio.h>
int main()
{
    float a,b;
    int n;
    printf("enter the value of a and b:");
    scanf("%f%f%d",&a,&b,&n);
    switch(n)
    {
        case 1:printf("sum is:%f",a+b);
              break;
        case 2:printf("substract is:%f",a-b);
              break;
        case 3:printf("multiply is :%f",a*b);
              break;
        case 4:printf("divide is:%f",a/b);
              break;
       default:printf("invalid input");
    }
    return 0;
}
