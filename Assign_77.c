// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.
#include <stdio.h>
void CheckPalindrome(int num)
{
    int N=num,q,sum=0;
    while(num!=0)
    {
        q=num%10;
        sum=(10*sum)+q;
        num=num/10;
    }
    if(sum==N)
    {
        printf("the number %d is palindrome",N);
    }
    else
    {
        printf("the number %d is not palindrome.",N);
    }
}
int main()
{
    int n;
    printf("Enter the number:\t");
    scanf("%d",&n);
    CheckPalindrome(n);
    return 0;
}
