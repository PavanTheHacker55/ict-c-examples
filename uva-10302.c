#include<stdio.h>
long long int func(long long int n)
{
    if(n==0)
        return 0;
    return (n*n*n)+func(n-1);
}
int main()
{
    long long int n,sum;
    while(scanf("%lld",&n)==1)
    {
        sum=func(n);
        printf("%lld\n",sum);
    }
    return 0;
}
