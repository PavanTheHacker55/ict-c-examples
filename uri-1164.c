#include<stdio.h>
int main()
{
    int i,n,j,N,s;
    scanf("%d",&N);
    for(j=0;j<N;j++)
    {
        scanf("%d",&n);
        for(s=0,i=1;i<=n/2;i++)
        {
           if(n%i==0)
           {
               s=s+i;
           }
        }
        if(s==n)
        {
            printf("%d eh perfeito\n",n);
        }
        else
        {
            printf("%d nao eh perfeito\n",n);
        }
    }
    return 0;
}
