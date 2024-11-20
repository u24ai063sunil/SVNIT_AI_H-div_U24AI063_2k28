// Write a C program to calculate the length of string excluding and including spaces using pointer.
#include <conio.h>
#include <stdio.h>
int main()
{
    char string[100];
    printf("Enter the string:\n");
    gets(string);
    char *str=string;
    // excluding spaces
    int i=0,length_E=0,length_I=0;
    while(*(str+i)!='\0')
    {
         if(*(str+i)!=' ')
         {
             length_E++;
         }
         i++;
    }
    i=0;
    //including spaces
    while(*(str+i)!='\0')
    {
         length_I++;
         i++;
    }
    printf("Length of string excluding spaces:\n%d",length_E);
    printf("\nLength of string including spaces:\n%d",length_I);         
        
    return 0;     
}
