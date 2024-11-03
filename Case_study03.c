//You are given a number N, you need to print the number of positions where digits exactly divides N.
/* Constraints

1 <=T <= 15

0 < N < 10^10
*/
#include <stdio.h>
int main()
{
    int N,T,num,q,divi_posi=0;//N is the number required, T means the no.of test required
    printf("Enter the number of test cases(T):\n");
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
   {
    printf("Enter the number(N):\n");
    scanf("%d",&N);
    num=N;
    while(N!=0)
    {
        q=N%10;
        N/=10;
        if(num%q==0)
        {
           divi_posi++;
        }
     }
     printf("Total number of positions in %d which divides %d :%d\n",num,num,divi_posi); 
     divi_posi=0;
     } 
}         
