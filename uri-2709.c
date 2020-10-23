#include<stdio.h>
int a[100005];
void sieve()
{
    int i,j;
    a[0]=1;
    a[1]=1;
    for(i=2; i<=1000; i++)
    {
        if(a[i]==0)
        {
            for(j=i+i; j<100000; j+=i)
            {
                a[j]=1;
            }
        }
    }
}
int main()
{
    int n,ar[25],i,m,sum;
    sieve();
    while(scanf("%d",&m)==1)
    {
        sum=0;
        for(i=1; i<=m; i++)
        {
            scanf("%d",&ar[i]);
        }
        scanf("%d",&n);
        for(i=m; i>0; i-=n)
        {
            sum+=ar[i];
        }
        if(a[sum]==0)
        {
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        }
        else
        {
            printf("Bad boy! I’ll hit you.\n");
        }
    }
    return 0;
}
