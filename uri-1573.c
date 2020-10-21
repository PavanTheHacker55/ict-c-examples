#include<stdio.h>
int main()
{
    long long a,b,c,ans;
    while(scanf("%lld%lld%lld",&a,&b,&c)==3&&a!=0&&b!=0&&c!=0)
    {
        ans=a*b*c;
        ans=pow(ans,1.0/3.0);
        printf("%lld\n",ans);
    }
    return 0;
}
