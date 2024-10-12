// WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT.
#include <stdio.h>
void Char_Check(char ch)
{
    if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
    {
        printf("Entered character is vowel");
    }
    else
    {
        printf("Entered character is not vowel");
    }
}
int main()
{
    char ch;
    printf("Enter the character:\t");
    scanf("%c",&ch);
    Char_Check(ch);
    return 0;
}
