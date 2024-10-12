// WRITE A FUNCTION TO READ LINE OF TEXT AND FIND OUT LENGTH OF STRING.
#include <stdio.h>
#include <string.h>
void Str_length()
{
    char str[100];
    printf("Enter the string:\t");
    gets(str);
    printf("String:\t");
    puts(str);
    int length=strlen(str);
    printf("%d",length);
}
int main()
{
    Str_length();
    return 0;
}
