// Given a word,rearrange the	letters	of	 	to	construct	another	word	 	in	such	a	way	that,	 	is	lexicographically	greater	than w.
//Constraints :
//1 ≤ t ≤ 105

//1 ≤ |w| ≤ 100
//w will	contain	only	lower	case	english	letters	and	its'	length	will	not	exceed	 .
#include <stdio.h>
#include <string.h>

void big(char c[])
{
    int len = strlen(c);
    int i = len-2;
    while(c[i] >= c[i+1]) 
    {
        i--;
    }
    if(i == -1)
    {
        printf("No Answer\n");
        return;
    }
    int j = len-1;
    while(c[j] <= c[i]) 
    {
        j--;
    }
    char temp = c[i];
    c[i] = c[j];
    c[j] = temp;

    for(int k = i+1; k<len-1; k++) 
    {
        for(int l = k+1; l<len; l++) 
        {
            if(c[k] > c[l]) 
            {
                char var = c[k];
                c[k] = c[l];
                c[l] = var;
            }
        }
    }
    printf("%s\n",c);
}
    int main() 
{
    int n;
    printf("Enter number of test cases: ");
    scanf("%d",&n);
    char a[n][101];
    for(int i=0;i<n;i++) 
    {
        scanf("%s",a[i]);
    }
    for(int i=0; i<n;i++) 
    {
        big(a[i]);
    }
    return 0;
 }
