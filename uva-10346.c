#include<stdio.h>
int main()
{
    long long int n,k,sum,r,b;
    while(scanf("%lld%lld",&n,&k)==2)
    {
        sum=n;
        while(1)
        {
            r=n%k;
            b=n/k;
            sum+=b;
            n=r+b;
            if(n<k)
                break;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
