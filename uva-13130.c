#include<stdio.h>
int main()
{
    int T,a,ap,i,y;
    scanf("%d",&T);
    while(T--)
    {
        y=0;
        scanf("%d",&ap);
        for(i=1; i<5; i++)
        {
            scanf("%d",&a);
            if(ap+1==a)
                y++;
            ap=a;
        }
        if(y==4)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
