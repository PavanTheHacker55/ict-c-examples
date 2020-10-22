#include<stdio.h>
int main()
{
    int L,W,H,T,i;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d%d",&L,&W,&H);
        if(L<21 && W<21 && H<21)
            printf("Case %d: good\n",i);
        else
            printf("Case %d: bad\n",i);
    }
    return 0;
}
