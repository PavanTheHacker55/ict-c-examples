#include<stdio.h>
int main()
{
    int a,b,c,s;
    while(scanf("%d",&a)==1&&a!=0)
    {
        scanf("%d%d",&b,&c);
        s=a*b;
        s=(s*100.0)/c;
        s=sqrt(s);
        printf("%d\n",s);
    }
    return 0;
}
