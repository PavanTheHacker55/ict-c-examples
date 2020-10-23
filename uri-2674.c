#include<stdio.h>
long long ara[1000005];

long long digitsum(long long  m)
{
    long long sum=0,r,k=1;
    while(m!=0)
    {
        r=m%10;
        if(ara[r]==1)
        {
            k=0;
        }
        m=m/10;
    }
    return k;
}
void sieve()
{
    long long i,j,dsg;
    ara[0]=1;
    ara[1]=1;
    for(i=2; i<=10000; i++)
    {
        if(ara[i]==0)
        {

            for(j=i+i; j<=1000000; j+=i)
            {
                ara[j]=1;
            }
        }
    }
}

int main()
{
    long long n,a,total,i,t;
    sieve();
    while(scanf("%lld",&n)==1)
    {
        if(ara[n]==1)
        {
            printf("Nada\n");
        }
        else
        {
            a=digitsum(n);
            if(a==1)
            {
                printf("Super\n");
            }
            else
            {
                printf("Primo\n");
            }
        }
    }
    return 0;
}
