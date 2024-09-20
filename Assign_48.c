// C program to draw a pattern.
#include<stdio.h>
int main()
{
    for( int i=1;i<=5;i++)
    {
        for( int j=5;j>=1;j--)
        {
            if(j>i)
            {
                printf(" ");
            }
            else
            {
                for(int u=1;u<=i;u++)
                {
                printf("%d",u);
                }
                break;
            }
            
        }
        printf("\n");
    }
    return 0;
}
