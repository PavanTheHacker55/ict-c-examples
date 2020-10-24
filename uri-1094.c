#include<stdio.h>
int main()
{
    char ch;
    int i,n,a,t,sum1=0,sum2=0,sum3=0;
    double avg1,avg2,avg3;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %c",&a,&ch);
        if(ch=='C')
        {
            sum1+=a;
        }
        if(ch=='R')
        {
            sum2+=a;
        }
        if(ch=='S')
        {
            sum3+=a;
        }
    }
    t=sum1+sum2+sum3;
    avg1=((double)sum1/t)*100;
    avg2=((double)sum2/t)*100;
    avg3=((double)sum3/t)*100;

    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",sum1);
    printf("Total de ratos: %d\n",sum2);
    printf("Total de sapos: %d\n",sum3);
    printf("Percentual de coelhos: %.2lf %%\n",avg1);
    printf("Percentual de ratos: %.2lf %%\n",avg2);
    printf("Percentual de sapos: %.2lf %%\n",avg3);

    return 0;

}
