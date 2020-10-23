#include<stdio.h>
int main()
{
    int a[105][105],n,i,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1 && a[i+1][j] || a[i+1][j]==1 && a[i][j+1] || a[i][j]==1 && a[i+1][j+1] || a[i][j]==1 && a[i][j+1] || a[i][j+1]==1 && a[i+1][j+1] || a[i+1][j]==1 && a[i+1][j+1])
            {
                printf("S");
            }
            else
            {
                printf("U");
            }
        }
        printf("\n");
    }
    return 0;
}
