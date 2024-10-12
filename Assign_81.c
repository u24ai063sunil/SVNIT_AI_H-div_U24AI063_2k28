//WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN ZERO OTHERWISE.
#include <stdio.h>
int check_prime(int n)
{
    if(n>1)
    {
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
       
    }
    return 1;
    }
    if(n==1)
    {
        return 0;
    }
    if(n<1)
    {
        return 0;
    }
}
int main() 
{
    int num;
    printf("Enter the number:\t");
    scanf("%d",&num);
    printf("%d",check_prime(num));
    return 0;
}
