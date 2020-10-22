#include<stdio.h>
int main()
{
    int T,N,nmbr_of_cll[22],noc,i,j,k,mi,ju,M,J;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        M=J=mi=ju=0;
        scanf("%d",&N);
        for(j=0; j<N; j++)
            scanf("%d",&nmbr_of_cll[j]);
        for(k=0; k<N; k++)
        {
            noc=nmbr_of_cll[k];
            for(j=1; ; j++)
            {
                if(noc<j*30 && mi==0)
                {
                    mi=10*j;
                    M+=mi;
                }
                if(noc<j*60 && ju==0)
                {
                    ju=15*j;
                    J+=ju;
                }
                if(mi!=0 && ju!=0)
                {
                    mi=ju=0;
                    break;
                }
            }
        }
        if(M<J)
            printf("Case %d: Mile %d\n",i,M);
        else if(J<M)
            printf("Case %d: Juice %d\n",i,J);
        else
            printf("Case %d: Mile Juice %d\n",i,M);
    }
    return 0;
}
