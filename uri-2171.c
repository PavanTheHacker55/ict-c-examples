#include<stdio.h>
int main()
{
    long long i,j,n,a,b;
    while(scanf("%lld",&n)==1&&n!=0)
    {
        for(i=1,a=0;a+i<=n;i++)
        {
            a+=i;
        }
        b=n-a;
        printf("%lld %lld\n",a,b);
    }
    return 0;
}
