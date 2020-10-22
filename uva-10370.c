#include<stdio.h>
int main()
{
    long long int C,N,i,j,count,n[1010];
    double avg,abov_avg,sum;
    scanf("%lld",&C);
    for(i=0; i<C; i++)
    {
        count=0;
        sum=0;
        scanf("%lld",&N);
        for(j=0; j<N; j++)
        {
            scanf("%lld",&n[j]);
            sum+=(double)n[j];
        }
        avg=sum/(double)N;
        for(j=0; j<N; j++)
        {
            if((double)n[j]>avg)
                count++;
        }
        abov_avg=((double)count/(double)N)*100;
        printf("%0.3lf%%\n",abov_avg);
    }
    return 0;
}
