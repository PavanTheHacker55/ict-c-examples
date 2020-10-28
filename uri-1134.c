#include<stdio.h>
int main()
{
    int n,ac=0,gs=0,ds=0,count=0;
    for( ; ; )
    {
        scanf("%d",&n);
        if(n==1)
        {
            ac++;
        }
        if(n==2)
        {
            gs++;
        }
        if(n==3)
        {
            ds++;
        }
        if(n==4)
        {
            printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",ac,gs,ds);
            break;
        }
    }
    return 0;
}
