#include<stdio.h>
int main()
{
    int n,i,j,k,x,y,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        for(j=0,k=x,sum=0;j<2*y;j++,k++)
        {
            if(k%2!=0)
            {
                sum=sum+k;
            }
        }
        printf("%d\n",sum);
    }
    return 0;

}
