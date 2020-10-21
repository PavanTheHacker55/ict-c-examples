#include<stdio.h>
int main()
{
    int n,m,i,j,f,k,c,a[10005];
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        scanf("%d",&m);
        c=0;
        for(i=0; i<m; i++)
        {
            f=0;
            scanf("%d",&a[i]);
            for(k=0; k<i; k++)
            {
                if(a[i]==a[k])
                {
                    f=1;
                }
            }
            if(f==0)
            {
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
