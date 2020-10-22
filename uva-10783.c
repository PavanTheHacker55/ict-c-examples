#include<stdio.h>
int main()
{
    long long int T,a,b,sum;
    scanf("%lld",&T);
    int i,j;
    for(i=1; i<=T; i++)
    {
        sum=0;
        scanf("%lld%lld",&a,&b);
        for(j=a; j<=b; j++)
            sum+=(j%2!=0)?j:0;
        printf("Case %d: %lld\n",i,sum);
    }
    return 0;
}
