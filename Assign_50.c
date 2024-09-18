// C program to draw a pattern.
#include <stdio.h>
int main() 
{
    for(char ch='A';ch<='E';ch++)
    {
        for(char character='A';character<=ch;character++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
