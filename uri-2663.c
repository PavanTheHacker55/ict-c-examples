#include<stdio.h>
int a[1005];
int main()
{
    int i,n,t,k,sum;
    scanf("%d %d",&t,&k);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        a[n]++;
    }
    sum=0;
    for(i=1000;i>0;i--)
    {
        if(a[i]!=0)
        {
            sum+=a[i];
        }
        if(sum>=k)
        {
            break;
        }
    }
    printf("%d\n",sum);
    return 0;
}
