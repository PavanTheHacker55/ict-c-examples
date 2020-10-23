#include<stdio.h>
int main()
{
    long long c=0,i,j,n,sum=1,a[205];
    for(i=0;i<=200;i++)
    {
        sum+=i;
        a[i]=sum;
    }
    while(scanf("%lld",&n)==1)
    {
        c++;
        printf("Caso %lld: %lld numero",c,a[n]);
        if(n!=0)
        {
            printf("s");
        }
        printf("\n0");
        if(n!=0)
        {
            printf(" ");
        }
        for(i=0;i<=n;i++)
        {
            for(j=0;j<i;j++)
            {
                printf("%lld",i);
                if(j!=n-1)
                {
                    printf(" ");
                }
            }
        }
        printf("\n\n");
    }
    return 0;

}
