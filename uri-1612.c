#include<stdio.h>
int main()
{
    long long int n,a,b,i;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        b=ceil(a/2.0);
        printf("%lld\n",b);
    }
    return 0;
}
