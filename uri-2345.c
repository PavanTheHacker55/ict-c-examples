#include<stdio.h>
int main()
{
    int a,b,c,d,t;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    while(1)
    {
        if(a>b)
        {
            t=a;
            a=b;
            b=t;
        }
        if(d<c)
        {
            t=d;
            d=c;
            c=t;
        }
        if(b>c)
        {
            t=b;
            b=c;
            c=t;
        }
        if(a<=b&&b<=c&&c<=d)
        {
            break;
        }
    }
    printf("%d\n",abs((a+d)-(b+c)));
    return 0;
}
