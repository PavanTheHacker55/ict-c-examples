#include<stdio.h>
int main()
{
    int i;
    double ara[100];
    for(i=0;i<100;i++)
    {
        scanf("%lf",&ara[i]);
    }
    for(i=0;i<100;i++)
    {
        if(ara[i]<=10)
        {
            printf("A[%d] = %.1lf\n",i,ara[i]);
        }
    }
    return 0;
}
