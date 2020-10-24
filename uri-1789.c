
#include<stdio.h>
int main()
{
    int n,t,i,k,j;
    while(scanf("%d",&t)==1)
    {
        k=0;
        j=0;
        for(i=0;i<t;i++)
        {
            scanf("%d",&n);
            if(n>=20)
            {
                k++;
            }
            else if(n>=10)
            {
                j++;
            }
        }
        if(k!=0)
        {
            printf("3\n");
        }
        else if(j!=0)
        {
            printf("2\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}
