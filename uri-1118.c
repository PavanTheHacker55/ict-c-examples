#include<stdio.h>
int main()
{
    double n,m,avg,sum=0,count=0,k=0;
    while(scanf("%lf",&n)!=EOF)
    {
        if(k==1)
        {
            if(n==1)
            {
                k=0;
            }
            else if(n==2)
            {
                break;
            }
            else if(n!=1)
            {
                printf("novo calculo (1-sim 2-nao)\n");
            }
        }
        else if(n>=0&&n<=10)
        {
            sum=sum+n;
            count++;
        }
        else
        {
            printf("nota invalida\n");
        }

        if(count==2)
        {
            printf("media = %.2lf\n",sum/2.0);
            sum=0;
            count=0;
            printf("novo calculo (1-sim 2-nao)\n");
            k=1;
        }
    }
    return 0;
}
