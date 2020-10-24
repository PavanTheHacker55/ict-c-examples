#include<stdio.h>
int main()
{
    int n,i,j,N[1000];
    scanf("%d",&n);
    if(n<=50&&n>=2)
    {
        for(i=0,j=0; i<1000; i++)
        {
            N[i]=j;
            j++;
            if(j>=n)
            {
                j=0;
            }
        }
        for(i=0; i<1000; i++)
        {
            printf("N[%d] = %d\n",i,N[i]);
        }
    }

    return 0;
}
