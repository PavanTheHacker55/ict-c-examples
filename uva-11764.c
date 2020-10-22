#include<stdio.h>
int main()
{
    int T,jump,height,pj,countH,countL,Case,i;
    scanf("%d",&T);
    for(Case=1; Case<=T; Case++)
    {
        scanf("%d",&jump);
        scanf("%d",&pj);
        countH=countL=0;
        for(i=1; i<jump; i++)
        {
            scanf("%d",&height);
            if(pj<height)
                countH++;
            else if(pj>height)
                countL++;
            pj=height;
        }
        printf("Case %d: %d %d\n",Case,countH,countL);
    }
    return 0;
}
