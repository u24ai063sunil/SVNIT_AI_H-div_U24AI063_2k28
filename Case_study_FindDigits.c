//You are given a number N, you need to print the number of positions where digits exactly divides N.
/* Constraints

1 <=T <= 15

0 < N < 10^10
*/
#include <stdio.h>
int main()
{
    int T,q,divi_posi=0;//N is the number required, T means the no.of test required
    scanf("%d",&T);
    long long N;
    int result[T];
    for(int i=1;i<=T;i++)
   {
    scanf("%lld",&N);
    num=N;
    while(N!=0)
    {
        q=N%10;
        N/=10;
        if(q!=0)
        {
        if(num%q==0)
        {
           divi_posi++;
        }
        }
     }
     result[i-1]=divi_pos; 
     divi_posi=0;
     } 
    for(int i=0;i<T;i++)
     {
         printf("%d\n", result[i]);
     }     
}         
