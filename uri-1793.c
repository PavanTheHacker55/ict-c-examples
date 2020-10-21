#include<stdio.h>
int main()
{
    int n,i,sum,a[105];
    while(scanf("%d",&n)==1&&n!=0)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i]+9>=a[i+1])
            {
                sum+=a[i+1]-a[i];
            }
            else
            {
                sum+=10;
            }
        }
        sum+=10;
        printf("%d\n",sum);
    }
    return 0;
}

