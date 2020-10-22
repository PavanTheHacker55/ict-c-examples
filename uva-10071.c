#include<stdio.h>
int main()
{
    long long int v,t,d;
    while(scanf("%lld%lld",&v,&t)==2)
    {
        d=v*(2*t);
        printf("%lld\n",d);
    }
    return 0;
}
