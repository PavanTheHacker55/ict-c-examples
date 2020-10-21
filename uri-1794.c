#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
    if(n>=a&&n<=b&&n>=c&&n<=d)
    {
        printf("possivel\n");
    }
    else
    {
        printf("impossivel\n");
    }
    return 0;
}
