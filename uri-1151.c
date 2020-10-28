#include<stdio.h>
int main()
{
    int n,i,sum=0,t1=0,t2=1;
    scanf("%d",&n);
    for(i=0;i<n-2;i++)
    {
        if(i==0)
        {
            printf("%d ",t1);
        }
        if(i==1)
        {
            printf("%d ",t2);
        }
        sum=t1+t2;
        t1=t2;
        t2=sum;
        printf("%d",sum);
        while(i<n-3)
            {
                printf(" ");
                break;
            }
    }
    printf("\n");
    return 0;
}
