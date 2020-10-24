#include<stdio.h>
int main()
{
    int t,n,m,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&m);
            if(m==1)
            {
                printf("Rolien\n");
            }
            else if(m==2)
            {
                printf("Naej\n");
            }
            else if(m==3)
            {
                printf("Elehcim\n");
            }
            else if(m==4)
            {
                printf("Odranoel\n");
            }
        }
    }
    return 0;
}
