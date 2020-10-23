#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long ara[1000005];
long long pr[1000005];
long long factor[1000005];
long long k,c,nod,x,p,sod;

long long fact(long long n)
{
    int j=0,i,c=0;
    for(i=0; i<k && pr[i]*pr[i]<=n; i++)
    {
        if(n%pr[i]==0)
        {
            c=0;
            while(n%pr[i]==0)
            {
                factor[j]=pr[i];
                n=n/pr[i];
            }
            j++;
        }
    }
    if(n!=1)
    {
        factor[j]=n;
        j++;
    }
    return j;
}

void sieve()
{
    long long i,j;

    for(i=3; i<=1000; i+=2)
    {
        if(ara[i]==0)
        {
            for (j=i*i; j<=1000000; j+=2*i)
            {
                ara[j]=1;
            }
        }
    }
}

int main()
{
    sieve();

    long long n,i,j,m;
    pr[0]=2;
    k=1;

    for (j=3; j<=1000000; j+=2)
    {
        if(ara[j]==0)
        {
            pr[k]=j;
            k++;
        }
    }

    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        printf("%lld =",n);

        j=fact(n);
        for(i=0; i<j; i++)
        {
            printf(" %lld",factor[i]);
            if(i<j-1)
            {
                printf(" x");
            }
        }
        printf("\n");
    }
    return 0;
}

