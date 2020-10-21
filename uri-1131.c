#include<stdio.h>
int main()
{
    int n,a,b,i=0,d=0,g=0,c=0;
    while(1)
    {
        c++;
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            i++;
        }
        else if(a<b)
        {
            g++;
        }
        else
        {
            d++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&n);
        if(n==2)
        {
            printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",c,i,g,d);
            if(i>g)
            {
                printf("Inter venceu mais\n");
            }
            else if(i<g)
            {
                printf("Gremio venceu mais\n");
            }
            else
            {
                printf("Não houve vencedor\n");
            }
            return 0;
        }
    }
}
