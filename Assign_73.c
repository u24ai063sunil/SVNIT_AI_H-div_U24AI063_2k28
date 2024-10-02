//  C program to count vote of 5 candidate and spoiled votes.
#include <stdio.h>
int main() 
{
    int vote_cand[6],voters;
    printf("Enter the total number of voters:\t");
    scanf("%d",&voters);
    printf("Enter the votes of each voter:\n");
    int vote[voters];
    vote_cand[0]=vote_cand[1]=vote_cand[2]=vote_cand[3]=vote_cand[4]=vote_cand[5]=0;
    for(int i=0;i<voters;i++)
    {
        scanf("%d",&vote[i]);
        switch(vote[i])
        {
            case 1:vote_cand[0]++;
                  break;
            case 2:vote_cand[1]++;
                  break;
            case 3:vote_cand[2]++;
                  break;
            case 4:vote_cand[3]++;
                  break;
            case 5:vote_cand[4]++;
                  break;
            default:vote_cand[5]++;
        }
    }
    for(int i=0;i<6;i++)
    {
        if(i!=5)
        {
            printf("The votes of %d no. canditate is: %d \n",i+1,vote_cand[i]);
        }
        else
        {
            printf("The spoiled votes are:%d",vote_cand[i]);
        }
    }
    return 0;
}
