#include<stdio.h>
int main()
{
    long long int g,m,f,ft,t,i;
    while(scanf("%lld",&g)==1)
    {
        if(g==0)
            break;
        else
        {
            m=1;
            f=0;
            for(i=2; i<=g; i++)
            {
                ft=f;
                f=m;
                m=m+ft;
            }
            t=m+f;
            printf("%lld\n",t);
        }
    }
    return 0;
}
