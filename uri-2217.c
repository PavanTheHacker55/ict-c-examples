#include<stdio.h>
int main()
{
    long long i,n,m;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&m);
        if(m%2==0)
        {
            printf("1\n");
        }
        else
        {
            printf("9\n");
        }
    }
    return 0;
}
