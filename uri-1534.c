#include<stdio.h>
int main()
{
    int n,i,j,k;
    while(scanf("%d",&n)==1)
    {
        for(i=1,k=n; i<=n; i++,k--)
        {
            for(j=1; j<=n; j++)
            {
                if(k==j)
                {
                    printf("2");
                }
                else if(i==j)
                {
                    printf("1");
                }
                else
                {
                    printf("3");
                }
            }
            printf("\n");
        }
    }
    return 0;
}

