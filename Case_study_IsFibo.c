//You are given an integer, N. Write a program to determine if N is an element of the Fibonacci Sequence.

//The first few elements of fibonacci sequence are 0,1,1,2,3,5,8,13.... A fibonacci sequence is one where every element is a sum

//of the previous two elements in the sequence. The first two elements are 0 and 1.

//Formally:

//fib = 0

//fib = 1

//fib = fib + fib ∀ n > 1
//Constraints:
//1<= T <= 10^5

//1 <= N <=10^10
#include <stdio.h>
int result[100000];
void fibo(int N,int t)
{
    long long fibo_series[1000000];
    fibo_series[0]=0;
    fibo_series[1]=1;
    int a=0,b=1,i=1;
    while(fibo_series[i]<=N)
    {
        fibo_series[i]=a+b;
        a=b;
        b=fibo_series[i];
        i++;
    }
    long long j=0;
    int flag=0;
    while(fibo_series[j]<=N&&flag==0)
    {
        if(fibo_series[j]==N)
       {
          flag=1;
       }
        j++; 
    }
    if(flag==0)
    {
        result[t-1]=0;
    }
    else
    {
        result[t-1]=1;
    }
}               
int main()
{
    long long T;//num means number of test cases
    scanf("%lld",&T);
    for(int t=1;t<=T;t++)
    {
        long long N;
        scanf("%lld",&N);
        fibo(N,t);
    }
    for(int k=1;k<=T;k++)
    {
        if(result[k-1]==1)
        {
            printf("IsFibo\n");
        }
        if(result[k-1]==0)
        {
            printf("IsNotFibo\n");
        }
    }             
    return 0;
}        
