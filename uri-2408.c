#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&b<c||a>b&&b>c)
    {
        printf("%d\n",b);
    }
    else if(b<a&&a<c||b>a&&a>c)
    {
        printf("%d\n",a);
    }
    else
    {
        printf("%d\n",c);
    }
    return 0;
}
