#include<stdio.h>
int main()
{
    long long n,m;
    while(scanf("%lld%lld",&n,&m)==2)
    {
        printf("%lld\n",n^m);
    }
    return 0;
}
