#include<stdio.h>
int main()
{
    long long a,b,t,i,j;
    double ra,rb;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld%lld%lf%lf",&a,&b,&ra,&rb);
        j=0;
        while(a<=b)
        {
            a+=a*(ra/100.0);
            b+=b*(rb/100.0);
            j++;
            if(j>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(j<=100)
        {
            printf("%lld anos.\n",j);
        }
    }
    return 0;
}
