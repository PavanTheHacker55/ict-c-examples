#include<stdio.h>
int main()
{
    int n,a,b,i,c1,c2;
    while(scanf("%d",&n)==1)
    {
        c1=c2=0;
        if(n==0)
        {
            break;
        }
        for(i=0; i<n; i++)
        {
            scanf("%d%d",&a,&b);

            if(a>b)
            {
                c1++;
            }
            else if(a<b)
            {
                c2++;
            }
        }
        printf("%d %d\n",c1,c2);

    }
    return 0;
}
