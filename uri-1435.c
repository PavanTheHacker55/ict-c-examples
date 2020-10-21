#include<stdio.h>
int main()
{
    int n,i,m,j,k,a[105][105];
    while(scanf("%d",&n)==1&&n!=0)
    {
        k=1;
        m=n;
        memset(a,0,sizeof(a));
        while(n>=n/2)
        {
            for(i=k; i<=n; i++)
            {
                for(j=k; j<=n; j++)
                {
                    a[i][j]=k;
                    a[j][i]=k;
                }
            }
            k++;
            n--;
        }
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=m; j++)
            {
                printf("%3d",a[i][j]);
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
