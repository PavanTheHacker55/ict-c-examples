#include<stdio.h>
int main()
{
    int t,n,sum,i;
    char s[100];
    while(scanf("%d",&t)==1&&t!=0)
    {
        sum=0;
        for(i=0;i<t;i++)
        {
            scanf("%d",&n);
            getchar();
            gets(s);
            if(strcmp(s,"suco de laranja")==0)
            {
                sum+=n*120;
            }
            else if(strcmp(s,"morango fresco")==0||strcmp(s,"mamao")==0)
            {
                sum+=n*85;
            }
            else if(strcmp(s,"goiaba vermelha")==0)
            {
                sum+=n*70;
            }
            else if(strcmp(s,"manga")==0)
            {
                sum+=n*56;
            }
            else if(strcmp(s,"laranja")==0)
            {
                sum+=n*50;
            }
            else if(strcmp(s,"brocolis")==0)
            {
                sum+=n*34;
            }
        }
        if(sum<110)
        {
            printf("Mais %d mg\n",110-sum);
        }
        else if(sum>130)
        {
            printf("Menos %d mg\n",sum-130);
        }
        else
        {
            printf("%d mg\n",sum);
        }
    }
    return 0;
}
