#include<stdio.h>
int main()
{
    long long int n,r,d,sum;
    int i;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            break;
        else
        {
            while(n>=10)
            {
                sum=0;
                for(i=0; n!=0; i++)
                {
                    r=n%10;
                    sum+=r;
                    n=n/10;
                }
                n=sum;
            }
            printf("%lld\n",n);
        }
    }
    return 0;
}
