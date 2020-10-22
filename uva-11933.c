#include<stdio.h>
long long int power(long long int nmbr)//1
{
    long long int i,mul=1;
    for(i=0; i<nmbr; i++)
        mul*=2;
    return mul;
}
int main()
{
    long long int n,i,r,a,b,count;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        a=b=0;
        count=1;
        for(i=0; n!=0; i++)
        {
            r=n%2;
            n/=2;
            if(r==1)
            {
                if(count%2==1)
                    a+=power(i);
                else
                    b+=power(i);
                count++;

            }
        }
        printf("%lld %lld\n",a,b);
    }
    return 0;
}
