// WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS.
// NCR = (!N/(!R*!(N-R)));
#include <stdio.h>
float fact(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return a*fact(a-1);
    }
}
float NcR(int N,int R)
{
    return fact(N)/(fact(R)*fact(N-R));
}
int main()
{
    int n,r;
    printf("Enter the value of N:\t");
    scanf("%d",&n);
    printf("Enter the value of R:\t");
    scanf("%d",&r);
    if(n>=r && n>0 && r>=0)
    {
        printf("%f",NcR(n,r));
    }
    else
    {
        printf("Invalid input");
    }
}
