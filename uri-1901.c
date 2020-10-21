#include<stdio.h>
int main()
{
    int n,k,i,j,c,kij[205][205],a[405];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&kij[i][j]);
        }
    }
    c=0;
    for(i=1;i<=2*n;i++)
    {
        scanf("%d%d",&j,&k);
        a[i]=kij[j][k];
        k=0;
        for(j=1;j<i;j++)
        {
            if(a[j]==a[i])
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
