//WRITE A C PROGRAM USING POINTERS TO FIND THE number of words in the strings.
#include <stdio.h>
#include <conio.h>

int main()
{
    char str[100];
    int count,i=0;
    char *ptr=str;
    printf("Enter the string:\n");
    fgets(str,100,stdin);
    while(*(ptr+i)!='\n')
    {
        if(*(ptr+i)==' ')
        {
            count++;
        } 
        i++;
    }
    if(count!=0)
    {
        printf("The number of words in the string are:%d",count+1);       
    }
    if(count==0)
    {
        printf("The number of words in the string are:%d",count);       
    }    
    return 0;
}    

    
