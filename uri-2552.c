#include<stdio.h>
int main()
{
    int n,m,i,j,a[105][105],sum;
    while(scanf("%d%d",&n,&m)==2)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                sum=0;
                if(a[i][j]==1)
                {
                    printf("9");
                }
                else
                {
                    if(i>0)
                    {
                        sum+=a[i-1][j];
                    }
                    if(j>0)
                    {
                        sum+=a[i][j-1];
                    }
                    if(i<n-1)
                    {
                        sum+=a[i+1][j];
                    }
                    if(j<m-1)
                    {
                        sum+=a[i][j+1];
                    }
                    printf("%d",sum);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
