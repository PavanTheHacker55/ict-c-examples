#include<stdio.h>
int main()
{
    long long int N,n[1010],i,j,temp,count;
    while(scanf("%lld",&N)==1)
    {
        count=0;
        for(i=0; i<N; i++)
            scanf("%lld",&n[i]);
        for(i=0; i<N; i++)
        {
            for(j=0; j<N-1; j++)
            {
                if(n[j]>n[j+1])
                {
                    temp=n[j];
                    n[j]=n[j+1];
                    n[j+1]=temp;
                    count++;
                }
            }
        }
        printf("Minimum exchange operations : %lld\n",count);
    }
    return 0;
}
