#include<stdio.h>
int main()
{
    int n,i,j,t;
    unsigned long long int sum=0,t1=0,t2=1,ara[70];

    ara[0]=0;
    ara[1]=1;
    for(i=1;i<60;i++)
    {
        sum=t1+t2;
        t1=t2;
        t2=sum;
        ara[i+1]=sum;
    }
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d",&n);
        printf("Fib(%d) = %llu\n",n,ara[n]);
    }

    return 0;
}
