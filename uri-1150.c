#include<stdio.h>
int main()
{
    int X,Z,i,sum=0,count=0;
    scanf("%d",&X);
    for( ; ; )
    {
        scanf("%d",&Z);
        if(Z>X)
        {
            for(i=X; ;i++)
            {
                sum=sum+i;
                count++;
                if(sum>Z)
                {
                    break;
                }
            }
            printf("%d\n",count);
            break;
        }
    }

    return 0;
}
