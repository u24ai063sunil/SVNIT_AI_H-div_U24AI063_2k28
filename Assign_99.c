// WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS
// PRESENT IN THE FILE.
#include<stdio.h>
#include<ctype.h>
int main ()
{
    FILE *fptr;
    char ch;
    int count = 0;
    fptr = fopen("prog99_file.txt","r");
    while (!feof(fptr))
    {
        ch = getc(fptr);
        printf("%c",ch);

        switch(toupper(ch))
        {
            case'A':
            case'E':
            case'I':
            case'O':
            case'U':
                    count++;
                    break;
        }
    }
    
    fclose(fptr);

    printf("The no. of vowels in the file are %d",count);

    return 0;
}
