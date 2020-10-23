#include<stdio.h>
int main()
{
    int t,i,b,a,d,l,aa,dd,ll;
    double v,vl;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d%d%d%d",&b,&a,&d,&l,&aa,&dd,&ll);
        v=(double)(a+d)/2.0;
        vl=(double)(aa+dd)/2.0;
        if(l%2==0)
        {
            v+=b;
        }
        if(ll%2==0)
        {
            vl+=b;
        }
        if(v>vl)
        {
            printf("Dabriel\n");
        }
        else if(vl>v)
        {
            printf("Guarte\n");
        }
        else
        {
            printf("Empate\n");
        }
    }
    return 0;
}
