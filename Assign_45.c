// C program to guess a number in 3 attempts.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int number;
    srand(time(NULL));
    number=(rand()%100+1);
    printf("You have 3 attempts to guess the number between 1 and 100 correctly\n");
    int guess=0,flag=0,i=1;
    printf("Guess a number:\t");
    do
    {
        scanf("%d",&guess);
        if(guess==number)
        {
            printf("You guessed it correct!");
            flag=1;
            break;
        }
        else if(guess<number)
        {
            if(i<=2)
            {
                 printf("It is not correct,Guess a number greater than this:\t");
            }
        }
        else
        {
            if(i<=2)
            {     printf("It is not correct,Guess a number less than this:\t");
            }
        }
        i++;
    }while(i<=3);
    if(flag==0)
    {
        printf("You were not able to guess the number correctly\n");
        printf("Correct number is %d",number);
    }
    return 0;
}
