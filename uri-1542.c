#include<stdio.h>
int main()
{
    int a,b,c,x;
    while(scanf("%d",&a)==1&&a!=0)
    {
        scanf("%d%d",&b,&c);
        x=(a*b*c)/(c-a);
        if(x==1)
        {
            printf("%d pagina\n",x);
        }
        else
        {
            printf("%d paginas\n",x);
        }
    }
    return 0;
}
