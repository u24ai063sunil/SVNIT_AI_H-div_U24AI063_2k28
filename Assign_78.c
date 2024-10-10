// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT.
#include <stdio.h>
void CheckArmstrong(int num)
{
    int N,q,sum=0;
    N=num;
    while(num!=0)
    {
        q=num%10;
        sum+=q*q*q;
        num=num/10;
    }
    if(sum==N)
    {
        printf("the number %d is armstrong.",N);
    }
    else
    {
        printf("the number %d is not armstrong.",N);
    }
}
int main()
{
    int n;
    printf("Enter the number:\t");
    scanf("%d",&n);
    CheckArmstrong(n);
    return 0;
}
