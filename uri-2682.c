#include<stdio.h>
int main()
{
    long long n,temp=0,a=0,k=0;
    while(scanf("%lld",&n)==1)
    {
        if(n>temp&&k==0)
        {
            temp=n;
            a=n+1;
        }
        else
        {
            k=1;
        }
    }
    printf("%lld\n",a);
    return 0;
}
