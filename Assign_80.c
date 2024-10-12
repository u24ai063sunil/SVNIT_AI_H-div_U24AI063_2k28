//WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUMBERS.TEST THE FUNCTION FOR N=5,10,AND 15.
#include <stdio.h>
void PrintFibo(int n)
{
    int c,a=0,b=1;
    for(int i=1;i<=n;i++)
    {
        printf("%d\t",a+b);
        c=a;
        a=b;
        b=b+c;
    }
}
int main() 
{
    int num;
    printf("Enter the number of terms required:\t");
    scanf("%d",&num);
    printf("0\t1\t");
    PrintFibo(num-2);
    return 0;
}
