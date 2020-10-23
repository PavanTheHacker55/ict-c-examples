#include<stdio.h>
int main()
{
    int a,b,c,x,y,z,sum=0;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);
    if(x>a)
    {
        sum+=x-a;
    }
    if(y>b)
    {
        sum+=y-b;
    }
    if(z>c)
    {
        sum+=z-c;
    }
    printf("%d\n",sum);
    return 0;
}
