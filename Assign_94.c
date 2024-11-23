//WRITE A C PROGRAM USING POINTERS TO REVERSE A STRING.
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[100],temp;
    char *ptr=str;
    printf("Enter the string:\n");
    fgets(str,100,stdin);
    int l=strlen(str);
    for(int i=0;i<l/2;i++)
    {
        temp=*(ptr+i);
        *(ptr+i)=*(ptr+l-1-i);
        *(ptr+l-1-i)=temp;
    }
    puts(ptr);    
    return 0;
}    

    
