#include<stdio.h>
int main()
{
    long long int n,T,r;
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld",&n);
        n=((((((n*567)/9)+7492)*235)/47)-498);
        r=(n%100)/10;
        r=(r<0)?(-1*r):r;
        printf("%lld\n",r);
    }
    return 0;
}
