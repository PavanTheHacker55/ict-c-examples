#include<stdio.h>
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n==0&&m==0)
        {
            break;

        }
        printf("%d\n",n+m);
    }
    return 0;
}
