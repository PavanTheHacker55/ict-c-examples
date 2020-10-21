#include<stdio.h>
int main()
{
    int n,m,i,p,q,k;
    while(scanf("%d",&n)==1)
    {
        m=sqrt(n);
        k=0;
        for(i=1;i<=m;i++)
        {
            p=n-i*i;
            q=sqrt(p);
            if(p==q*q)
            {
                k=1;
                break;
            }
        }
        if(k==1||n==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
