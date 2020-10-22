#include<stdio.h>
int main()
{
    int T,N,P,K,p,n,i;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d%d",&N,&K,&P);
        p=P%N;
        n=p+K;
        n=(n==N)?N:((n>N)?n-N:n);
        printf("Case %d: %d\n",i,n);
    }
    return 0;
}
