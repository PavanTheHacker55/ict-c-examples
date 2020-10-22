#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,count,i,ex;
    double rt;
    while(1)
    {
        scanf("%lld%lld",&a,&b);
        if(a==0 && b==0)
            break;
        else
        {
            count=0;
            for(i=a; i<=b; i++)
            {
                rt=sqrt(i);
                ex=(long long int)(rt*1000000)%1000000;
                if(ex==0)
                    count++;
            }
            printf("%lld\n",count);
        }
    }
    return 0;
}
