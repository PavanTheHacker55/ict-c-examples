#include<stdio.h>
int main()
{
    int T,R,l,r,ul,i;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&R);
        l=(45*R)/20;
        r=(55*R)/20;
        ul=(30*R)/20;
        printf("Case %d:\n%d %d\n%d %d\n%d %d\n%d %d\n",i,-l,ul,r,ul,r,-ul,-l,-ul);
    }
    return 0;
}
