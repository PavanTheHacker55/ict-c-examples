#include<stdio.h>

int main()
{
    int n,m,i,j,b[10005],c,a[20005];
    while(scanf("%d%d",&n,&m)==2&&n!=0&&m!=0)
    {
        memset(b,0,sizeof(b));
        c=0;
        for(i=0; i<m; i++)
        {
            scanf("%d",&a[i]);
            b[a[i]]++;
            if(b[a[i]]==2)
            {
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
