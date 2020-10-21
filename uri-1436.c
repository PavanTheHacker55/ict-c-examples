#include<stdio.h>
int main()
{
    int tc,n,i,tmp,j;
    int player[9];
    int t=0;
    scanf("%d",&tc);
    while(tc--)
    {
        t++;
        scanf("%d",&n);

        tmp=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&player[i]);
        }

        for(i=0; i<n; i++)
        {
            for(j=i; j<n; j++)
            {
                if(player[i]>=player[j])
                {
                    tmp=player[i];
                    player[i]=player[j];
                    player[j]=tmp;
                }
            }
        }
        tmp=n/2;
        printf("Case %d: %d\n",t,player[tmp]);
    }

    return 0;
}
