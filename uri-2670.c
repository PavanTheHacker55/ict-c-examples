#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    x=b*2+c*4;
    y=a*2+c*2;
    z=a*4+b*2;
    if(x<=y&&x<=z)
    {
        printf("%d\n",x);
    }
    else if(y<=x&&y<=z)
    {
        printf("%d\n",y);
    }
    else
    {
        printf("%d\n",z);
    }
    return 0;
}
