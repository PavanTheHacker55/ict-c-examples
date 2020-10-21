#include<stdio.h>
int main()
{
    int a[10005],n,i,c,p,k;
    while(scanf("%d",&n)==1&&n!=0)
    {
        c=0;
        p=0;
        k=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<n;i++)
        {
            if(a[i]<a[i-1]&&p<1)
            {
                k=0;
                c++;
                p++;
            }
            else if(a[i]>a[i-1]&&k<1)
            {
                p=0;
                c++;
                k++;
            }
        }
        if(a[0]>a[1]&&a[n-2]>a[n-1]||a[0]<a[1]&&a[n-2]<a[n-1])
        {
            c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
