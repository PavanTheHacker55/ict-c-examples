#include<stdio.h>
int main()
{
    long long n,r,e,sum;
    while(scanf("%lld",&n)==1)
    {
        sum=0;
        if(n!=0)
        {
            while(1)
            {
                r=n%3;
                e=n/3;
                n=r+e;
                sum+=e;
                if(n<=2)
                {
                    if(n==2)
                        sum+=1;
                    break;
                }
            }
            printf("%lld\n",sum);
        }
    }
    return 0;
}
