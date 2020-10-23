#include<stdio.h>
int main()
{
    int a,n,m,i,j,t,x1,x2,y1,y2;
    while(scanf("%d%d",&n,&m)==2)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a);
                if(a==2)
                {
                    x1=i;
                    y1=j;
                }
                else if(a==1)
                {
                    x2=i;
                    y2=j;
                }
            }
        }
        t=abs(x1-x2)+abs(y1-y2);
        printf("%d\n",t);
    }
    return 0;
}
