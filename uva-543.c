#include<stdio.h>
#include<math.h>
int IsPrime(int n)
{
    int rt=(int)sqrt(n),i;
    for(i=2; i<=rt; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int a,b,c,n,p,p1,i;
    while(scanf("%d",&n)==1)
    {
        c=0;
        if(n==0)
            break;
        else
        {
            for(i=2; c==0; i++)
            {
                a=i;
                p=IsPrime(a);
                if(p==1)
                {
                    b=n-a;
                    p1=IsPrime(b);
                    if(p1==1)
                        {
                            printf("%d = %d + %d\n",n,a,b);
                            c=1;
                        }
                }
            }
        }
    }
    return 0;
}
