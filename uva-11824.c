#include<stdio.h>
long long int power(long long int nmbr,long long int pwr)
{
    long long int i,mul=1;
    for(i=0; i<pwr; i++)
        mul*=nmbr;
    return mul;
}
int main()
{
    long long int T,L[44],i,j,k,temp,ans;
    scanf("%lld",&T);
    while(T--)
    {
        L[0]=1;
        ans=0;
        for(i=1; L[i-1]!=0; i++)
            scanf("%lld",&L[i]);
        for(j=1; j<i-1; j++)
        {
            for(k=j+1; k<i; k++)
            {
                if(L[j]<L[k])
                {
                    temp=L[j];
                    L[j]=L[k];
                    L[k]=temp;
                }
            }
        }
        for(j=1; j<i; j++)
            ans+=2*power(L[j],j);

        if(ans>5000000)
           printf("Too expensive\n");
        else
            printf("%lld\n",ans);
    }
    return 0;
}
