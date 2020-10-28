#include<stdio.h>
int main()
{
    int i,n,j,N,p;
    scanf("%d",&N);
    for(j=0; j<N; j++)
    {
        scanf("%d",&n);
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
            {
                p=1;
                break;
            }
            else
            {
                p=0;
            }
        }

        if(p==1)
        {
            printf("%d nao eh primo\n",n);
        }
        else
        {
            printf("%d eh primo\n",n);
        }
    }
    return 0;
}
