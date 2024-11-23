//WRITE A C PROGRAM USING POINTERS TO COUNT THE NUMBER OF VOWELS IN THE STRING.
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
     char str[100];
     char *ptr=str;
     int count=0;
     printf("Enter the string:\n");
     fgets(str,100,stdin);
     int l=strlen(str);
     for(int i=0;i<l;i++)
     {
         switch (tolower(*(ptr+i)))
         {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                      count++;
                      break;
            default :
                      break;
         }
     }
     printf("The number of vowels are:%d",count);                 
    return 0;
}    

    
