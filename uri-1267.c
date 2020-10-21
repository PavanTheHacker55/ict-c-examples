#include<stdio.h>

int main()
{
    int n,m,i,j,b,k,a[505];
    while(scanf("%d%d",&n,&m)==2&&n!=0&&m!=0)
    {
        memset(a,0,sizeof(a));
        k=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&b);
                if(b==1)
                {
                    a[j]++;
                }
                if(a[j]==m)
                {
                    k=1;
                }
            }
        }
        if(k==1)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
