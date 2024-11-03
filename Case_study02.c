//Animesh has N empty candy jars, numbered from 1 to N, with infinite capacity. He performs M operations. Each operation isdescribed by 3 integers a, b and k. Here, a and b are indices of the jars, and k is the number of candies to be added inside each
//jar whose index lies between a and b (both inclusive). Can you tell the average number of candies after M operations?
#include <stdio.h>
int main()
{
    int N,M,a,b,k,sum=0; //a =starting index ,b=ending index ,k=no.of candies in boxes of indices from a to b
    printf("Enter the value of total no.of boxes(N) and total number of operations (M):\n");
    scanf("%d %d",&N,&M);
    for(int i=1;i<=M;i++)
    {
         printf("Enter the value of a,b & k for %d operation:\n",i);
         scanf("%d %d %d",&a,&b,&k);
         sum+=k*(b-a+1);
    }
    printf("The average value of candies :%d",sum/N);
    return 0;     
}
