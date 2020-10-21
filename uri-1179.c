#include<stdio.h>
int main()
{
    int i,j=0,k=0,l,n,a[5],b[5];
    for(i=0; i<15; i++)
    {
        if(k==5)
        {
            k=0;
            for(l=0; l<5; l++)
            {
                printf("par[%d] = %d\n",l,b[l]);
            }
        }
        if(j==5)
        {
            j=0;
            for(l=0; l<5; l++)
            {
                printf("impar[%d] = %d\n",l,a[l]);
            }
        }
        scanf("%d",&n);
        if(abs(n)%2==1)
        {
            a[j]=n;
            j++;
        }
        else
        {
            b[k]=n;
            k++;
        }
    }
    for(l=0; l<j; l++)
    {
        printf("impar[%d] = %d\n",l,a[l]);
    }
    for(l=0; l<k; l++)
    {
        printf("par[%d] = %d\n",l,b[l]);
    }
    return 0;
}
