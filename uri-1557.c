#include<stdio.h>
int main()
{
    int n,i,m,p,l,j,q,k,a[105][105];
    while(scanf("%d",&n)==1&&n!=0)
    {
        m=n;
        memset(a,0,sizeof(a));
        for(i=1,l=1; i<=n; i++,l*=2)
        {
            for(j=1,k=l; j<=n; j++,k*=2)
            {
                a[i][j]=k;
            }
        }
        p=log10(a[n][n]);
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=m; j++)
            {
                q=log10(a[i][j]);
                q=p-q;
                for(k=0;k<q;k++)
                {
                    printf(" ");
                }
                printf("%d",a[i][j]);
                if(j!=m)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
