#include<stdio.h>
int main()
{
    int i,j,k,x,sum;
    for( ; ; )
    {
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        for(j=0,k=x,sum=0;j<10;j++,k++)
        {
            if(k%2==0)
            {
                sum=sum+k;
            }
        }
        printf("%d\n",sum);
    }
    return 0;

}
